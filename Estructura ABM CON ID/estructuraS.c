#include <stdio.h>
#include <stdlib.h>
#include "estructura.h"

eLocalidad ConstruirLocalidad()
{
 printf("Ingresar  Id de Localidad");
 scanf("%s",eLocalidad.Id);
 printf("Ingresar   Localidad");
 fflush(stdin);
 gets(eLocalidad.Descripcion);
}

ePersona ConstruirPersona( int IdLocalidad )
{
    ePersona Personas;

    printf("Ingrese Id Persona: ");
    scanf("%d", &ePersona.IdPersona);

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(ePersona.nombre);

    printf("Ingrese Apellido: ");
    gets(ePersona.nombre);

    printf("Ingrese Edad: ");
    scanf("%f", &ePersona.Edad);

    return Personas;
}

int CargarLocalidades(eLocalidad listado[] ,int TAM)
{
    int i;
    for (i=0;i<TAM;i++)
    {
        listado[i]=ConstruirLocalidad();
    }
    return 1;
}

void MostrarLocalidad (eLocalidad localidad )
{
    printf(" Codigo : %d",localidad.id)

    printf(" Nombre : %d",localidad.id)

}

void MostrarListadoLocalidad (eLocalidad localidad , int TAM)
{
    int i;
    for (i=0;i<TAM;i++)
    {
        MostrarLocalidad(listado[i]);
    }

}


void ordenarListado(int)
{


}
