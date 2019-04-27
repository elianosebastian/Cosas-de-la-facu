#include <stdio.h>
#include <stdlib.h>
#include "estructura.h"

eLocalidad ConstruirLocalidad()
{
 printf("Ingresar  Id de Localidad");
 scanf("%s",eLocalidad Id);
 printf("Ingresar   Localidad");
 gets(eLocalidad Descripcion);
}

ePersona ConstruirPersona( int IdLocalidad )
{
    printf("Ingresar  Id de Persona");
    scanf("%s",ePersona Id);

    printf("Ingresar   Nombre");
    gets(ePersona Nombre);


    printf("Ingresar   Apellido");
    gets(ePersona Descripcion);

    printf("Ingresar   Edad");
    gets(ePersona Descripcion);

}

int CargarLocalidades(eLocalidad listado[] ,int TAM)
{
    int i;
    for (i=0;i<max;i++)
    {
        listado[i]=ConstruirLocalidad();
    }
}
