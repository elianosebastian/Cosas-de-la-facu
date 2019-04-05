#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char nombre [6];
    char otroNombre [50]="Ceboya Eliano";
    int largo;
    int compara;

    strupr(otroNombre);//Pasa todos los caracteres a mayuscula

    strlwr(otroNombre);//Pasa todos los caracteres a minuscula

    strcat(nombre,otroNombre);//Concatena los strings.

    /* strcpy(nombre,otroNombre) Copia la cadena origen pero puede tener problemas de desbodramiento de memoria*/

    strncpy(nombre,otroNombre,5); //Copia la cadena origen hasta la capacidad de la variable destino

    printf("Ingresar Nombre  : ");

   // fgets(nombre , 48 , stdin); //OPCION 1 CUIDADO PORQUE CUENTA EL \n COMO CARACTER

    gets(nombre); //OPCION 2 SOLO FUNCIONA EN WINDOWS

    compara = stricmp(nombre,"Ceboya Eliano");// 0 Si son iguales || -1 si es menor || 1 si es mayor

    printf("\n %d \n ",compara);

    printf("\n Su nombre es  :%s ",nombre);

    printf("\n otro nombre  :%s ",otroNombre);

    largo =  strlen(nombre);

    printf("\n El largo del nombre :%d" ,largo);

    return 0;
}
