int esNumerico(char str[])
{
    int sePudo=1;
    int i=0;
    while(str[i] != '\0')
        if(str[i]< '0' || str[i] > '9')
        {
            sePudo=0;
        }
        i++;
return sePudo;
}


int esSoloLetras(char str[])
{
    int sePudo=1;
    int i=0;
    while(str[i] != '\0')
        if((str[i]!=' ' ) && (str[i]< 'a' || str[i] > 'z') && (str[i]< 'A' || str[i] > 'Z')
        {
            sePudo=0;
        }
        i++;
return sePudo;
}


void getString(char mensaje[],char input[])
{
    printf(mensaje);
    scanf("%s",input);
}

int getStringLetras(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esSoloLetras(aux))
    {
        strcpy(input,aux);
        return 1;
    }
 return 0;
}


int getStringNumeros(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esNumerico(aux))
    {
        strcpy(input,aux);
        return 1;
    }
 return 0;
}
