#ifndef __SALES_H__
#define __SALES_H__

#include <string.h>
#include <stdlib.h>

#include "CatClients.h"
#include "CatProducts.h"

#define SIZE_BUF_SALES 128

typedef struct sales *SALES;
typedef int QUANTITY;
typedef double PRICE;
typedef char INFO_PROMO;
typedef int FILIAIS;
typedef int MONTH;

SALES initSales();
SALES updateSales(CLIENT,PRODUCT,MONTH,FILIAIS,QUANTITY,PRICE,INFO_PROMO);
int partCheck(char*,CATALOG_CLIENTS,CATALOG_PRODUCTS,CLIENT*,PRODUCT*,MONTH*,FILIAIS*,QUANTITY*,PRICE*,INFO_PROMO*); /*NÃO FICA BEM AQUI*/
void freeSale(SALES);

/* GETS E SETS */
CLIENT getSalesClient(SALES);
PRODUCT getSalesProduct(SALES);
PRICE getSalesPrice(SALES);
QUANTITY getSalesQuantity(SALES);
INFO_PROMO getSalesInfoPromo(SALES);
MONTH getSalesMonth(SALES);
FILIAIS getSalesFilial(SALES);
SALES setSalesClient(CLIENT,SALES);
SALES setSalesProduct(PRODUCT,SALES);
SALES setSalesPrice(PRICE,SALES);
SALES setSalesQuantity(QUANTITY,SALES);
SALES setSalesInfoPromo(INFO_PROMO,SALES);
SALES setSalesMonth(MONTH,SALES);
SALES setSalesFilial(FILIAIS,SALES);



#endif