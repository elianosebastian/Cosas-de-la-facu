#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bibliotecarrays.h"
#define TAM  5

int main()
{
    int miArray[TAM]={};
    int indice;

    cargarArray(miArray, TAM);
    mostrarArray(miArray, TAM);
    indice = buscarValor(miArray,TAM, 5);

    printf("\n El indice es : %d",indice);

    if (indice!=-1)
    {
     printf("\n El indice es : %d",indice")
    } else {
              printf("\n No existe el indice ");
            }

    return 0;
}

