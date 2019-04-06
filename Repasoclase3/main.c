#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LARGO 20

int dameEdad (int *edad, char *mensaje);
int dameEdadDOS (int *edad, char *mensaje);
int dameEdadTRES (int *edad, char *mensaje);
int dameEdadIntentos (int *edad, char *mensaje, int contador);

int main()
{
 int laEdad;
 int sePudo;
 int contandor;

dameEdadIntentos (laEdad,sePudo,contandor);

 return 0;
}
/*
/** brief Funcion que pide ingresar una edad
 * y la retorna
 * \param int
 * \param int
 * \return int
 *

int dameEdad (int *edad, char *mensaje)
{
    int sePudo=0;
    int aux;
    printf(mensaje);
    sePudo = scanf("%d",&aux);

       if (sePudo==1)
        {
         *edad = aux;
        }

    return sePudo;
}
*/

/** \brief
 *
 * \param int
 * \param int
 * \return int
 *
 */
 /*
int dameEdadDOS (int *edad, char *mensaje)
{
    char cadenaCargada[LARGO];
    int sePudo=1;

    printf(mensaje);
    scanf("%s", cadenaCargada);

    *edad=atoi(cadenaCargada); // (atoi) Transforma una cadena de caracteres en un entero

    return sePudo;
}
*/

int dameEdadIntentos (int *edad, char *mensaje, int contador)
{
 int laEdad;
 int sePudo;
     do
     {
       sePudo=dameEdadTRES(&laEdad , "\n Que edad tenes?  : ");
       contador++;
     }while(sePudo==0 || contador<3);

     if (contador>3)
     {
      printf("\n Se te acabaron los intentos");
      sePudo=0;
     }else {
            printf("\n La edad es : %d " ,laEdad);
            sePudo=1;
           }
 return sePudo;
}

/** \brief Recibe una cadena de caracteres la recorre
 *
 * \param
 * \param
 * \return
 *
 */
int dameEdadTRES (int *edad, char *mensaje)
{
    char cadenaCargada[LARGO];
    int sePudo=1;
    int x;

    printf(mensaje);
    scanf("%s", cadenaCargada);

    for(x=0;x<strlen(cadenaCargada);x++)
    {
       if  (cadenaCargada[x]<'0' || cadenaCargada[x]>'9'  && cadenaCargada[x]!='/0')
        {
         sePudo=0;
        }
       if (sePudo=1)
        {
        *edad=atoi(cadenaCargada);
        }
    }
    return sePudo;
}

