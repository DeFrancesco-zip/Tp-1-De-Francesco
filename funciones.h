#ifndef funciones.h
#define funciones.h
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define CANT_ARTICULOS 60

#define SUCURSAL_1 0
#define SUCURSAL_2 1
#define SUCURSAL_3 2
#define TOTAL 4

typedef struct 
{
    char descripcion[90];
    int cantidad_sucursal[3]; // sucursal 1 2 3    
    int total;
}articulos_t;

void carga(articulos_t articulos[]);
void impresion(articulos_t articulos[]);
void orden(articulos_t articulos[]);

#endif
