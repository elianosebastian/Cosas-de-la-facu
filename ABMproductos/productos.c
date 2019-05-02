#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "productos.h"
#define CANT 10
eProductos pedirEstructura()
{
    eProductos productosParaRetornar;

    printf("\n---->Productos!<-----\n");

    printf("Ingresar Nombre del producto:");
    fflush(stdin);
    gets(productosParaRetornar.Nombre);

    printf("\nIngresar Proveedor:");
    fflush(stdin);
    gets(productosParaRetornar.Proveedor);

    printf("\nIngresar Codigo de barras:");
    fflush(stdin);
    gets(productosParaRetornar.codigodeBarra);

    printf("\nIngresar Fecha de vencimiento:");
    fflush(stdin);
    gets(productosParaRetornar.fechadeVencimiento);

     printf("\nIngresar Precio:");
     fflush(stdin);
     gets(productosParaRetornar.Precio);

     return productosParaRetornar;


}

void mostrarEstructura(eProducto Producto)
{

        printf("\t\n---->Lista Productos!<-----\n");
        printf("\t %15s %15s %10s %10s %10f %5d\n ",Producto.Nombre , Producto.Proveedor , Producto.codigodeBarra,)

}


void cargarArray(eProductos listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        listado[i]= pedirProducto();
    }
}

void mostrarArray(eProductos listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        if(listado[i].estado==OCUPADO)
        {
            mostrarProducto(listado[i]);
        }
    }
}

void construirArray(eProductos listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        listado[i].estado= LIBRE;
        listado[i].precio= 0;
        strcpy(listado[i].Nombre, "");
        strcpy(listado[i].Proveedor, "");
        strcpy(listado[i].codigodeBarra, "");
        strcpy(listado[i].fechadeVencimiento, "");
    }
}

int insertarProducto(eProductos listado[], int tam)
{
    int indice;
    indice= dameLugarLibre(listado, tam);
    if(indice != -1)
    {
        listado[indice]= pedirProducto();
    }
    return indice;
}

int dameLugarLibre(eProducto listado[], int tam)
{
    int i;
    int index = -1;

    for(i=0; i<tam; i++)
    {
        if(listado[i].estado==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}


int borrarProducto(eProductos lista[], int tam)
{


        int i;
        char codigo[50];
        int loEncontro = 0;

       printf("Ingrese el codigo de barras del producto para  Borrar : ");
       fflush(stdin);
       gets(codigo);

       for(i=0; i<tam; i++)
       {
           if(strcmp(lista[i].codigodeBarra, codigo)==0)
           {
              lista[i].estado = LIBRE;
                loEncontro = 1;
               break;
           }

       }

       if(loEncontro==0)
       {
          printf("Codigo inexistente!!");
       }

        return 0;
}

int editarProducto(eProductos lista[], int tam)
{
    int i;
    char codigo[50];
    int loEncontro = 0;

    printf("Ingrese el codigo de barras del producto a Editar :  ");
    fflush(stdin);
    gets(codigo);

  for(i=0;i<tam;i++)
  {
        if(strcmp(lista[i].codigodeBarra,codigo)==0)
    {
        printf("Ingrese el nuevo precio  :");
        scanf("%f",&lista[i].precio);
        loEncontro = 1;
        break;
    }

  }
    if (loEncontro==0)
    {
        printf("Codigo Inexistente...!!");
    }

    return 0;
}
void Menuopciones(void)
{
    int opcion;

    eProductos unProducto;
    eProductos listadoProductos[CANT];

    construirArray(listadoProductos,CANT);
    eProductos pedirEstructura();
    mostrarEstructura(eProducto listadoProductos);
    mostrarArray(listadoProductos,CANT);

    do
    {
        printf("1.ALTA\n2.BAJA\n3.MODIFICAR\n4.Mostrar\nElija opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
               insertarProducto(listadoProductos, CANT);
            break;
            case 2:
                borrarProducto(listadoProductos,CANT);
                break;
            case 3:
                editarProducto(listadoProductos, CANT);
                break;

            case 4:
                mostrarArray(listadoProductos,CANT);
                break;
        }
    }while(opcion!=10);



}
