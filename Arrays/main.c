#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char usuario[][10]={"seba","pepito","pibe","francisco","fdfds"};
   int nota[10]={8,5,2,10,3};
   int i;
   int j;

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
   scanf("%s",usuario[i]);
   //printf("Ingresar nota  %d :",i+1);
   //scanf("%d",&nota[i]);
  }
  */

   for(i=0;i<5;i++)
   {
   printf("Hola alumno :%s , su  nota:%d \n",usuario[i],nota[i]);
   }
//ORDENAMIENTO DE ARRAY
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
        }
      }

   for(i=0;i<5;i++)
   {
   printf("Hola alumno :%s , su  nota:%d \n",usuario[i],nota[j]);
   }

   }
   return 0;
}
