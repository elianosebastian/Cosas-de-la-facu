#include "bibliotekmenu.h"
#define CANT 10
Menuopciones()
{
    int opcion;

    //eProductos unProducto; por ahora no lo voy a utilizar
    eProductos listadoProductos[CANT];
    eProveedor listadoProveedor[CANT];

    InicializarProductos(eProductos listadoProductos , CANT);
    InicializarProveedor(eProductos listadoProductos , CANT);

    construirArray(listadoProductos,CANT);
    //eProductos pedirEstructura();

    mostrarEstructuraProducto(eProducto listadoProductos);
    mostrarEstructuraProveedor(eProveedor listadoProveedor)
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
