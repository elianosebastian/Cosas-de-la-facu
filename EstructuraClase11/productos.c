#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANT 10
#include "productos.h"

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

void mostrarEstructuraProducto(eProducto Producto, int Tam)
{

        printf("\t\n---->Lista Productos!<-----\n");
        printf("\t %15s %15s %10s \n ",Producto.Nombre , Producto.Proveedor , Producto.codigodeBarra);

}

void mostrarEstructuraProveedor(eProveedor Proveedor, int Tam)
{

        printf("\t\n---->Lista Proveedores!<-----\n");
        printf("\t %15s %15s %10s %10s %5d\n ",Proveedor.Duenio , Proveedor.Descripcion , Proveedor.Localidad,Proveedor.Cuit);

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

void InicializarProovedor(eProveedor lista[] , int cant)
{
    int i;
    int IdProveedor[3]={1 , 2 , 3};
    char Duenio[3][50]={"YPF ","AXION","SHELL"};
    char Descripcion[3][50]={"petrolera","petrolera","petrolera"};
    char Localidad[3][50]={"avellaneda","bahia Blanca","Rio negro"};
    char Cuit[3][13]={"444","555","666"};;


    for (i=0;i<3;i++)
    {
        strcpy(lista[i].Duenio,Duenio);
        strcpy(lista[i].Descripcion,Descripcion);
        strcpy(lista[i].Localidad,Localidad);
        strcpy(lista[i].Cuit,Cuit);
        strcpy(lista[i].IdProveedor,IdProveedor);
    }

}

void InicializarProductos(eProductos lista[] , int cant)
{
    int i;

    char Nombre[8][50]={ "Infinia ", "AxionPower" , "Vipower","Infinia Diesel" , "AxionDiesel", "ViPowerDiesel","Normal","Kerosene"};
    char codigodeBarras[4][50]={"100","200","300","400"};
    char fechadeVencimiento[3][50]={"01/01/2020","01/02/2020","01/07/2020","02/03/2020","02/10/2020","01/19/2020"};
    float Precio[10]={42,43,44,40,41,35,36,37,38};
    int IdProveedor[3]={1,2,3};

    for (i=0;i<10;i++)
    {
        strcpy(lista[i].Nombre,Nombre);
        strcpy(lista[i].codigodeBarra,codigodeBarras);
        strcpy(lista[i].fechadeVencimiento,fechadeVencimiento);
        strcpy(lista[i].Precio,Precio);
        strcpy(lista[i].IdProveedor,IdProveedor);
    }
}

void mostrarArrayProductosConProveedor(eProductos listado[], int cant , eProveedor listadoProveedor[],int cantproveedor)
{
    int i;
    for(i=0; i<cant; i++)
    {
      mostrarProducto(listado[i]);

       for(j=0;j<cantproveedor;j++)
       {
        if (listado[i].IdProveedor== listadoProveedor[i].id)
        {
           mostrarEstructuraProveedor(listadoProveedor[j]);
        }

       }

    }
}
void mostrarArrayProductosOrdenado(eProductos listado[], int cant , eProveedor listadoProveedor[],int cantproveedor,int Desc)
{

}
void mostrarArrayProductosElmaximo(eProductos listado[], int cant , eProveedor listadoProveedor[],int cantproveedor,int Desc)
{

}
