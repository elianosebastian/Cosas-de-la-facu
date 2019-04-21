#include <stdio.h>
#include <stdlib.h>
#define CANT 4

typedef struct {
char nombre[50];
char apellido[50];
int legajo;
}Persona;
void Inicializarpersonas(Persona arrayPersonas[], int Cantpersonas,int valor);
int Busquedaposiciones(Persona arrayPersonas[], int cantidadElementos, int valor);
int main()
{
Persona arrayPersonas[CANT];
Persona auxiliarCliente;

char AuxNombre[50];
char AuxApellido[50];
char AuxLegajo[50];
int AuxLegajoInt;

int indiceLugarLibre;
int indiceResultadoBusq;
int opcion = 0;

int i , j ;

Inicializarpersonas(arrayPersonas,CANT,-1); /** EL -1 ES PARA QUE ARRANQUE DE LA POSICION VACIA **/
while(opcion != 6)
{
    opcion = getInt("\n\n\n 1- ALTA \n 2-BAJA \n 3-MODIFICACION \n 4-LISTAR \n 5-SALIR\n\n");
    switch(opcion)
    {
    case 1:
        indiceLugarLibre = Busquedaposiciones(arrayPersonas , CANT , -1);
        if(indiceLugarLibre == -1)
        {
            printf("\n\n No quedan lugares libres");
            break;
        }
       printf("\n Alta \n ");
    if (!getStringLetras("Ingrese el nombre :" AuxNombre))
        {
             printf("El nombre debe tener solo letras \n");
             break;
        }

    if (!getStringLetras("Ingrese el Apellido :" AuxNombre))
        {
             printf("El Apellido debe tener solo letras \n");
             break;
        }
    if (!getStringNumeros("Ingrese el legajo : ",AuxLegajoInt))
        {
            printf("El Legajo debe tener solo Numeros \n");
        }
    AuxLegajoInt = atoi(AuxLegajo);

    if(Busquedaposiciones(arrayPersonas,CANT,AuxLegajoInt)!=-1)
    {
        printf("\n\n El legajo YA EXISTE    !------ \n");
        break;
    }
    strcpy(arrayPersonas[indiceLugarLibre].nombre,AuxNombre);
    strcpy(arrayPersonas[indiceLugarLibre].apellido,AuxApellido);
    strcpy(arrayPersonas[indiceLugarLibre].legajo,AuxLegajo);

    break;

    case 2:
        printf("\n Baja \n ");

        if(!getStringNumeros("Ingrese el legajo a dar de baja :",AuxLegajo))
        {
            printf("El legajo debe ser numerico \n");
            break;
        }
        indiceResultadoBusq=Busquedaposiciones(arrayPersonas,CANT,atoi(AuxLegajo));

        if(indiceResultadoBusq == -1 )
        {
            printf("\n No se encuentra ese legajoo");
            break;
        }
        arrayPersonas[indiceResultadoBusq].legajo-1;

    case 3:
        if(!getStringNumeros("Ingrese el legajo a modificar: ",AuxLegajo));
        {
            printf("El legajo debe ser numerico \n");
            break;
        }
        indiceResultadoBusq = Busquedaposiciones(arrayPersonas,CANT,atoi(AuxLegajo));

        if(indiceResultadoBusq == -1 )
        {
            printf("\N no se encuentra ese legajo\n ");
            break;
        }

        if(!getStringLetras("Ingrese el nombre : ",AuxNombre))
        {
            printf("El nombre debe estar compuestos sooolo por letras \n");
            break;
        }
        if(!getStringLetras("Ingrese el apellido : ",AuxApellido))
        {
            printf("El apellido debe estar compuestos sooolo por letras \n");
            break;
        }
        strcpy(arrayPersonas[indiceResultadoBusq].nombre , AuxNombre);
        strcpy(arrayPersonas[indiceResultadoBusq].apellido , AuxApellido);

        break;

    case 4:
        printf("\n Listar\n");
        for(i=0; i < CANT ; i++)
        {
            if(arrayPersonas[i].legajo != -1)
            {
                printf("\n %s - %s - %d",arrayPersonas[i].nombre, arrayPersonas[i].apellido, arrayPersonas[i].legajo);
            }
        }
        break;

    case 5:
        printf("\n Ordenado\n");
        for(i=0; i < CANT ; i++)
        {
            if(arrayPersonas[i].legajo != -1)
            {
                continue;
            }
         for(j=i; j < CANT ; j++)
           {
              if(arrayPersonas[i].legajo == -1)
               {
                   continue;
               }
              if (strcmp(arrayPersonas[i].apellido,arrayPersonas[j].apellido)>0)
              {
                    auxiliarCliente=arrayPersonas[j];
                    arrayPersonas[j] = arrayPersonas[i];
              }
            }
        }
    break;





    }
}
    return 0;

}


void Inicializarpersonas(Persona arrayPersonas[], int Cantpersonas,int valor)
{
    int i;
    for(i=0; i <cantPersonas ; i++)
    {
            arrayPersonas[i].legajo = valor;
    }
}

int Busquedaposiciones(Persona arrayPersonas[], int cantidadElementos, int valor)
{
    int i ;
    int posicion=-1;
    for (i=0; i< cantidadElementos; i++)
    {
        if(arrayPersonas[i].legajo == valor)
        {
            posicion = i;
        }
    }
    return posicion;



}
