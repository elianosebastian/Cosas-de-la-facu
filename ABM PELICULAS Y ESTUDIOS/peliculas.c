#include "peliculas.h"
#define LIBRE 0

void mostrarListaPeliculas(ePelicula lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado!=LIBRE)
        {
            mostrarEstructurapelis(lista[i]);
        }

    }
}

void inicializarPeliculas(ePelicula lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        lista[i].estado = LIBRE;
    }
}

int buscarLibrePelicula(ePelicula lista[], int tam)
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

void cargarEstructuraPeliculas(ePelicula lista[], int tam)
{
    int i;
    i = buscarLibre(lista, tam);
    if(i!=-1)
    {
      lista[i].id = mayorIdPeliculas(lista,T)+1;
      printf("\n Ingresar Titulo :");
      gets(lista[i].titulo)
      fflush(stdin);
      printf("\n Ingresar Director :");
      gets(lista[i].director)
      fflush(stdin);
      printf("\n Ingresar Duracion :");
      scanf("%f",&lista[i].duracion);
      fflush(stdin);
      printf("\n Ingresar Anio de Estreno :");
      scanf("%d",&lista[i].anioDeEstreno);
      fflush(stdin);

    }
    lista[i].estado = OCUPADO;
}

int mayorIdPeliculas(ePelicula lista[], int tam)
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

void mostrarEstructurapelis(ePelicula lista[])
{
    printf("---------------Lista Peliculas-------------------------------->")
    printf("\n %10s  %10s %10f.2 %10d",lista.titulo,lista.director,lista.duracion,lista.anioDeEstreno)
}
