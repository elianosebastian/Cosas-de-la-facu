#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1
#define BORRADO -1

#ifndef PRODUCTOS_H_INCLUDED
#define PRODUCTOS_H_INCLUDED

typedef struct {
        int estado;
        float Precio;
        char Nombre[50];
        char Proveedor[50];
        char codigodeBarra[13];
        char fechadeVencimiento[50];
}eProductos;
void Menuopciones(void);
eProductos pedirEstructura();
void mostrarEstructura(eProducto );
void cargarArray(eProductos [], int );
void mostrarArray(eProductos [], int );
void construirArray(eProductos [], int );
int insertarProducto(eProductos [], int );
int dameLugarLibre(eProductos [], int );
int borrarProducto(eProductos [], int );
int editarProducto(eProductos [], int );


















#endif // PRODUCTOS_H_INCLUDED
