#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"

/**
 * articulos [ index, cantidad_sucursal[SUCURSAL_1], cantidad_sucursal[SUCURSAL_2], cantidad_sucursal[SUCURSAL_3], total]
 * articulos [index, descripcion]
   */
 
int main(void)
{
    articulos_t articulos[CANT_ARTICULOS] = {0};
    printf("Bienvendio al final de Info 1\n\n");

    /*CARGA de las fichas*/
    carga(articulos);
    /* Impresion de fichas cargadas*/
    impresion(articulos);
    /* Ordenamiento */
    orden(articulos);
    
	impresion(articulos);
    
	return 0;
}
