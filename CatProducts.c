#include "CatProducts.h"
#include "avl.h"

struct catp {
	Avl CatProducts[SIZE_ABC];
};

struct conjProds{
	Product* GroupProd;
};

struct product {
	char* string;
};


CATALOG_PRODUCTS initProducts(){
	
	int i;
	CATALOG_PRODUCTS Catalog = malloc (sizeof(struct catp));
	for(i=0;i<SIZE_ABC;i++)	Catalog->CatProducts[i] = initAvl();
	return Catalog;
}


CATALOG_PRODUCTS insertProduct(CATALOG_PRODUCTS Catalog, Product prod){

	int index = prod->string[0]-'A';
	Catalog->CatProducts[index] = insert(Catalog->CatProducts[index],prod->string);
	return Catalog;
}


// criar um typedef BOOL 
int existProduct(CATALOG_PRODUCTS Catalog, Product prod){

	int exist;
	int index = prod->string[0]-'A';
	exist = existAvl(Catalog->CatProducts[index],prod->string);
	return exist;
}

int totalProductsLetter(CATALOG_PRODUCTS Catalog,char letter){
	int index = letter - 'A';
	return totalElements(Catalog->CatProducts[index]);
} 

int totalProducts(CATALOG_PRODUCTS Catalog){

	char letter; int total;
	for(letter = 'A'; letter <= 'Z';letter++)
		total+=totalProductsLetter(Catalog,letter);
	return total;
}

int printCatProducts(CATALOG_PRODUCTS Catalog){

	int i;

	if(Catalog == NULL) printf("piça\n");
	else 
		for(i=0;i<SIZE_ABC;i++)  {
			printf("LETRA %c=====\n", 'A'+i); 
			printAVL(Catalog->CatProducts[i]); 
	}
	return 0;
}

void removeCatProds(CATALOG_PRODUCTS Catalog){
	int i;
	for(i=0;i<SIZE_ABC;i++) {
		removeAvl(Catalog->CatProducts[i]);
		Catalog->CatProducts[i] = NULL;
	}
}

CATALOG_PRODUCTS valProd(FILE *file, CATALOG_PRODUCTS Catalog ,int *validated){

	char buffer[SIZE_BUFFER];
	Product line = malloc(sizeof(struct product));

	while(fgets(buffer,SIZE_BUFFER,file)!=NULL){
		line->string = strtok(buffer,"\r\n");
		Catalog = insertProduct(Catalog,line);
		(*validated)++;
	}
		
	return Catalog;
}

Avl getP (CATALOG_PRODUCTS Catalog, int x){
	return Catalog->CatProducts[x];
}
