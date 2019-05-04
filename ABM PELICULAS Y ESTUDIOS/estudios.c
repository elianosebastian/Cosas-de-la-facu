#include "estudios.h"
#define LIBRE 0
#define OCUPADO 1

void mostrarListaEstudio(eEstudio lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado!=LIBRE)
        {
            mostrarEstructuraEstudio(lista[i]);
        }

    }
}

void inicializarEstudios(eEstudio lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        lista[i].estado = LIBRE;
    }
}

int buscarLibreEstudio(eEstudio lista[], int tam)
{
    int i;
    int aux=-1;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==LIBRE)
        {
            index = i;
            break;
        }
    }
    return aux;
}

void cargarEstructuraEstudios(eEstudio lista[], int tam)
{
    int i;
    i = buscarLibre(lista, tam);
    if(i!=-1)
    {
      lista[i].id = mayorIdEstudios(lista,T)+1;
      printf("\n Ingresar Nombre :");
      gets(lista[i].nombre)
      fflush(stdin);
      printf("\n Ingresar Pais :");
      gets(lista[i].pais)
      fflush(stdin);
      printf("\n Ingresar anio de creacion :");
      scanf("%d",&lista[i].anioDeCreacion);
      fflush(stdin);
    }
    lista[i].estado = OCUPADO;
}

int mayorIdEstudios(eEstudio lista[], int tam)
{
    int i;
    int flag = 0;
    int aux = 0;
    for (i=0;i<tam;i++)
    {
        if (flag==0 || lista[i].id>aux )
        {
            aux = lista[i].id;
            flag = 1 ;
        }

    }
    return aux;
}

void mostrarEstructuraEstudio(eEstudio lista[])
{

}
