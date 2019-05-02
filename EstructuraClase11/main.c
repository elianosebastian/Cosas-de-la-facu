#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include "bibliotekmenu.h"
#include "productos.h"
#define CANT 10
#define MAX 10
int main()
{
   // Menuopciones();
     int opcion;

    //eProductos unProducto; por ahora no lo voy a utilizar
    eProductos listadoProductos[CANT];
    eProveedor listadoProveedor[CANT];

    InicializarProductos(eProductos listadoProductos[CANT] , MAX);
    InicializarProveedor(eProductos listadoProductos[CANT] , MAX);

    construirArray(listadoProductos,MAX);
    //eProductos pedirEstructura();

    mostrarEstructuraProducto(eProductos listadoProductos);
    mostrarEstructuraProveedor(eProveedor listadoProveedor);
    mostrarArray(listadoProductos,CANT);
    mostrarArrayProductosConProveedor(eProductos listadoProductos,CANT,eProveedor listadoProductos , CANT);
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
    return 0;
}
