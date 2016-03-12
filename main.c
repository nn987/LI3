#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "valida.h"
#include "testes.h"

#define MAX_CLIENTS 20000
#define MAX_PRODUCTS 200000
<<<<<<< HEAD
#define MAX_SALES 1

void getFile(char**,char**);

=======
#define MAX_SALES 1000000
>>>>>>> 33

void getFile(char**,char**,char**,int,char**);

// Main
<<<<<<< HEAD
int main(){

	char* clients[MAX_CLIENTS];
	char* products[MAX_PRODUCTS];
	//estrutura  das vendas;

	getFile(clients,products);

=======
int main(int argc, char ** argv){

	char* clients[MAX_CLIENTS];
	char* products[MAX_PRODUCTS];
	//Vendas sales[MAX_SALES];//Max sales da erro
	char** sales = malloc (MAX_SALES*sizeof(char*));

	getFile(clients,products,sales,argc,argv);

    for(int i=0;i<10;i++)
	printf("%s",sales[i]);

>>>>>>> 33
	return 0;
}


// Abre os 3 ficheiros : Clientes.txt | Produtos.txt | Vendas.txt 
<<<<<<< HEAD
void getFile(char** clients, char** products){
=======
void getFile(char** clients, char** products,char** sales,int argc, char** argv){
>>>>>>> 33
	
	FILE *fileClients,*fileProducts,*fileSales;	
	int validatedClients = 0;
	int validatedProducts = 0;
	int validatedSales = 0;
<<<<<<< HEAD

	fileClients = fopen("Clientes.txt","r");
	fileProducts = fopen("Produtos.txt","r");
	fileSales = fopen("Vendas.txt","r");

	if (fileSales == NULL || fileProducts == NULL || fileClients == NULL) 
		   printf("Não é possível ler os ficheiros.\n");
	else 
	{
		validatedClients = valClients(fileClients,clients);
		validatedProducts = valProducts(fileProducts,products);
		validatedSales = valSales(fileSales,clients,products);		
=======
	int n=1;
    
    switch(argc){
	      case 2: if(strcmp(argv[n],"Vendas.txt")==0)
	              	fileSales = fopen("Vendas.txt","r");
	              else if(strcmp(argv[n],"Clientes.txt")==0)
	              	     fileClients = fopen("Clientes.txt","r");
			           else if(strcmp(argv[n],"Produtos.txt")==0) 
			           	       fileProducts = fopen("Produtos.txt","r");
			      break;
                    
	      case 3: if(strcmp(argv[n],"Vendas.txt")==0)
	              	fileSales = fopen("Vendas.txt","r");
	              else if(strcmp(argv[n],"Clientes.txt")==0)
	              	     fileClients = fopen("Clientes.txt","r");
			           else if(strcmp(argv[n],"Produtos.txt")==0) 
			           	       fileProducts = fopen("Produtos.txt","r");
                  n++;
                  if(strcmp(argv[n],"Vendas.txt")==0)
	              	fileSales = fopen("Vendas.txt","r");
	              else if(strcmp(argv[n],"Clientes.txt")==0)
	              	     fileClients = fopen("Clientes.txt","r");
			           else if(strcmp(argv[n],"Produtos.txt")==0) 
			           	       fileProducts = fopen("Produtos.txt","r");
			      break;

	      default:fileClients = fopen("Clientes.txt","r");
			      fileProducts = fopen("Produtos.txt","r");
			   	  fileSales = fopen("Vendas.txt","r");
			   	  break;

    }

    if(0) 
		   printf("Não é possível ler os ficheiros.\n");
		
	else 
	{
		if(fileClients!=NULL){
		   validatedClients = valClientsP(fileClients,clients);
		   printf("CLIENTES: Foram validadas %d linhas.\n",validatedClients);
		   }
		if(fileProducts!=NULL){
		   validatedProducts = valClientsP(fileProducts,products);
		   printf("PRODUTOS: Foram validadas %d linhas.\n",validatedProducts);
           }
	    if(fileSales!=NULL){
		   validatedSales = valSales(fileSales,clients,products,sales);
		   printf("VENDAS: Foram validadas %d linhas.\n",validatedSales);
		   }		
>>>>>>> 33
	}

	fclose(fileClients);
	fclose(fileProducts);
<<<<<<< HEAD
	fclose(fileSales);

	printf("CLIENTES: Foram validadas %d linhas.\n",validatedClients);
	printf("PRODUTOS: Foram validadas %d linhas.\n",validatedProducts);
	printf("VENDAS: Foram validadas %d linhas.\n",validatedSales);
}

//1. Quando dá erro a abrir um ficheiro não diz qual deles é.
//2. Não sei até que ponto este código está bonito.
//3. Corrijam erros de inglês.
//4. Se arranjarem melhores nomes para variáveis, avisem-me ou mudem. 
=======
	fclose(fileSales);	
}

//1. Não será melhor pedir o nome dos ficheiros que vamos ler??? 
//2. Quando dá erro a abrir um ficheiro não diz qual deles é.
//3. Não sei até que ponto este código está bonito.
//4. Corrijam erros de inglês.
//5. Se arranjarem melhores nomes para variáveis, avisem-me ou mudem. 
>>>>>>> 33
// :)