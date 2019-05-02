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
        int  Id;
        float Precio;
        char Nombre[50];
       // char Proveedor[50];
        char codigodeBarra[13];
        char fechadeVencimiento[50];
        int IdProveedor;
}eProductos;

typedef struct {
    int Id;
    int IdProveedor;
    char Duenio[13];
    char Descripcion[50];
    char Localidad[13];
    int Cuit;
}eProveedor;

#endif



eProductos pedirEstructura();
void mostrarEstructuraProducto(eProducto );
void mostrarEstructuraProveedor(eProveedor );
void cargarArray(eProductos [], int );
void mostrarArray(eProductos [], int );
void construirArray(eProductos [], int );
int insertarProducto(eProductos [], int );
int dameLugarLibre(eProductos [], int );
int borrarProducto(eProductos [], int );
int editarProducto(eProductos [], int );
void InicializarProductos(eProductos [] , int );
void InicializarProveedor(eProductos [] , int );


















