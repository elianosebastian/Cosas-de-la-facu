#include "bibliotecarrays.h"
void mostrarArray(int array[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
       {
        printf("Array : %d \n",array[i]);
       }
}

void cargarArray(int array[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
       {
        printf("Ingrese numero %d \n",array[i]);
        scanf("%d", &array[i]);
       }
}
void buscarValor(int array[], int tam, int valor)
{
    int indice =-1;
    int i;
    for (i=0; i<tam ; i++)
     {
       if(array[i]==valor)
        {
          indice=i;
          break;
        }
     }
    return indice;
}
