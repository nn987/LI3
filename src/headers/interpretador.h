#ifndef __INTERPRETADOR_H__
#define __INTERPRETADOR_H__

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "CatClients.h"
#include "CatProducts.h"
#include "Sales.h"
#include "facturacao.h"		
#include "readFiles.h"
#include "queries.h"
#include "listaStrings.h"

#define CLIENTS_FILE "files/Clientes.txt"
#define	PRODUCTS_FILE "files/Produtos.txt"
#define SALES_FILE "files/Vendas.txt"

#define PAGE_SIZE 20


void menu();
void printTop(int);
void interpretador(CATALOG_CLIENTS,CATALOG_PRODUCTS,FILIAL*,FACTURACAO);
void backInterpretador(CATALOG_CLIENTS,CATALOG_PRODUCTS,FILIAL*,FACTURACAO);


/* QUERIE 1 */
void readFiles(CATALOG_CLIENTS,CATALOG_PRODUCTS,FILIAL*,FACTURACAO);


/* QUERIE 2 */
void readCatalog(CATALOG_CLIENTS,CATALOG_PRODUCTS,FILIAL*,FACTURACAO);
void readCatalogIntro(CATALOG_CLIENTS,CATALOG_PRODUCTS,FILIAL*,FACTURACAO);
void searchPage(CATALOG_CLIENTS,CATALOG_PRODUCTS,FILIAL*,FACTURACAO,char*,int);
void printCatalogProds(PAGE page_list,int page,int totalPages,int totalElements);
 

/* QUERIE 3 */
void periodMonths(CATALOG_CLIENTS,CATALOG_PRODUCTS,FILIAL*,FACTURACAO);
void printProductMonth(DADOS,DADOS,int,PRODUCT,int);
void backToProductMonth(CATALOG_CLIENTS,CATALOG_PRODUCTS,FILIAL*,FACTURACAO);


/* QUERIE 4 */
void backToProductsNSold (CATALOG_CLIENTS,CATALOG_PRODUCTS,FILIAL*,FACTURACAO);
int productsNSoldFiliais(int g1,int g2,int g3);
void productsNSold(CATALOG_CLIENTS,CATALOG_PRODUCTS,FILIAL*,FACTURACAO);
void printPageNSold(PAGE,int,int,int);
void printNSold(CATALOG_CLIENTS CatClients,CATALOG_PRODUCTS CatProducts,FILIAL* arrayFiliais,FACTURACAO fact,LISTA_STRINGS group,int totalPages,int actualPage);


/* QUERIE 5 */
void infoClientPurchases(CATALOG_CLIENTS,CATALOG_PRODUCTS,FILIAL*,FACTURACAO);
void printClientPurchases(DADOS_FILIAL,char*);
void backToClientPurchases(CATALOG_CLIENTS,CATALOG_PRODUCTS,FILIAL*,FACTURACAO);


/* QUERIE 6 */
void productMonth(CATALOG_CLIENTS,CATALOG_PRODUCTS,FILIAL*,FACTURACAO);
void printDATA(DADOS,int,int);
void backToPeriodMonths(CATALOG_CLIENTS,CATALOG_PRODUCTS,FILIAL*,FACTURACAO);


/* QUERIE 7 */
void listClients(CATALOG_CLIENTS,CATALOG_PRODUCTS,FILIAL*,FACTURACAO);
void searchPageListClients(CATALOG_CLIENTS,CATALOG_PRODUCTS,FILIAL*,FACTURACAO,int);
void printListClients(PAGE,int,int,int);


/* QUERIE 8 */
void searchPageListClientsProdFilial(CATALOG_CLIENTS,CATALOG_PRODUCTS,FILIAL*,FACTURACAO,int,LISTA_STRINGS*);
void printClientsProdFilial(PAGE,int,int,int);
void listClientsProdFilial(CATALOG_CLIENTS,CATALOG_PRODUCTS,FILIAL*,FACTURACAO);
void backToClientsProdFilial(CATALOG_CLIENTS,CATALOG_PRODUCTS,FILIAL*,FACTURACAO);


/* QUERIE 9 */
void backToClientMonth(CATALOG_CLIENTS CatClients,CATALOG_PRODUCTS CatProducts,FILIAL* arrayFiliais,FACTURACAO fact);
void infoClientMonth(CATALOG_CLIENTS CatClients,CATALOG_PRODUCTS CatProducts,FILIAL* arrayFiliais,FACTURACAO fact);
void searchPageProducts(CATALOG_CLIENTS CatClients,CATALOG_PRODUCTS CatProducts,FILIAL* arrayFiliais,FACTURACAO fact,LISTA_STRINGS group,int actualPage);
void printPageMostSold(PAGE page_list,int page,int to0talPages,int totalElements);


/* QUERIE 10*/
void nProductsMostSold(CATALOG_CLIENTS CatClients,CATALOG_PRODUCTS CatProducts,FILIAL* arrayFiliais,FACTURACAO fact);

/* QUERIE 11 */
void backToThreeMostPurchased(CATALOG_CLIENTS CatClients,CATALOG_PRODUCTS CatProducts,FILIAL* arrayFiliais,FACTURACAO fact);
void threeMostPurchased(CATALOG_CLIENTS CatClients,CATALOG_PRODUCTS CatProducts,FILIAL* arrayFiliais,FACTURACAO fact);
void printThreeMostPurchased(LISTA_STRINGS group,char* clientString);


/* QUERIE 12 */
void inactiveClientsProducts(CATALOG_CLIENTS CatClients,CATALOG_PRODUCTS CatProducts,FILIAL* arrayFiliais,FACTURACAO fact);
void printClientsProducts(int clients,int products);



void printGROUP_PRODS(LISTA_STRINGS,int);
void testMemory(CATALOG_CLIENTS,CATALOG_PRODUCTS,FILIAL*,FACTURACAO,char*);
int calculatePagesProducts(LISTA_STRINGS,int);
int calculatePagesClients(LISTA_STRINGS,int);

#endif