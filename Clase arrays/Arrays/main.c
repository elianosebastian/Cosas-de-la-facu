#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void mostrarVector(int datos[] , int tamanio);
void cargarVector(int datos[] , int tamanio);
void mostrarPalabra(char datos[][10] , int tamanio);
void cargarPalabra(char datosChar[][10], int tamanioNombre);
int main()
{
   char usuario[][10]={"D","C","A","B","E"};
   int nota[10]={8,5,2,10,3};
   int i;
   int j;

   mostrarVector(nota,5);
   cargarVector(nota,5);
   mostrarPalabra(usuario,5);

   /* INICIALIZACION DE ARRAYS EN PARALELO
   for(i=0;i<5;i++)
   {
   strcpy(usuario[i]," ");
   nota[i]=0;
   }
*/

  /* CARGA DE ARRAYS EN PARALELO

  for(i=0;i<5;i++)
  {
   printf("Ingresar usuario  %d :",i+1);
   gets(usuario[i]);
   printf("\n Ingresar nota  %d :",i+1);
   scanf("%d",&nota[i]);

  }

/*
   for(i=0;i<5;i++)
   {
   printf("Hola alumno :%s , su  nota:%d \n",usuario[i],nota[i]);
   }
 */

//ORDENAMIENTO  DE ARRAY POR NOTA
/*
  for(i=0;i<5;i++)
   {
      for(j=0;j<4;j++)
      {
        printf("%d => %d \n",nota[i],nota[j]);
        if(nota[i]< nota[j])
        {
            int aux = nota[i];
            nota[i] = nota[j];
            nota[j] = aux;

            char auxString [10];
            strcpy(auxString,usuario[i]);
            strcpy(usuario[i],usuario[j]);
            strcpy(usuario[j],auxString);
        }
      }
   } */
   for(i=0;i<5;i++)
   {
      for(j=0;j<4;j++)
      {
//ORDENAMIENTO DE ARRAY POR NOMBRE
// -1 LOS MUESTRA DE MENOR A MAYOR Y +1 LOS MUESTRA DE MAYOR A MENOR
         if (strcmp(usuario[i],usuario[j])==-1)
        {
            int aux = nota[i];
            nota[i] = nota[j];
            nota[j] = aux;

            char auxString [10];
            strcpy(auxString,usuario[i]);
            strcpy(usuario[i],usuario[j]);
            strcpy(usuario[j],auxString);
        }
      }
   } /*
   for(j=0;j<5;j++)
   {
   printf("Hola alumno :%s , su  nota:%d \n",usuario[j],nota[j]);
   } */
   return 0;
}

void mostrarVector(int datos[], int tamanio)
{
int i;
for(i=0;i<tamanio;i++)
   {
   printf(" Nota:%d \n",datos[i]);
   }
}

void cargarVector(int datos[], int tamanio)
{
int i;
for(i=0;i<tamanio;i++)
   {
    datos[i]=-1;
   }
}

void cargarPalabra(char datosChar[][10], int tamanioNombre)
{
int i;
for(i=0;i<tamanioNombre;i++)
   {
   datosChar[i]=-1;
   }
}

void mostrarPalabra(char datosChar[][10], int tamanioNombre)
{
int i;
for(i=0;i<tamanioNombre;i++)
   {
   printf(" Nombre :%d \n",datosChar[i]);
   }
}
