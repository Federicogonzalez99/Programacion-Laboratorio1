#include <stdio.h>
#include <stdlib.h>

void inicializarArrayPersonas(eEstudiante vecEstudiante[] ,int tamanio, int valor)
{
    int i;
    for(i=0; i < tamanio; i++)
    {
        vecEstudiante[i].estado = valor;
    }
}

/*int buscarLugarLibre(ePersonas arrayPersonas[], int tamanio, int valor)
{
    int i;
    int posicion = -1;
    for(i=0; i < tamanio; i++)
    {
        if(arrayPersonas[i].legajo == valor)
         {
             posicion = i;
                break;
         }
    }
    return posicion;
}
*/
int pedirInt(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}

char pedirChar(char mensaje[])
{
    char auxiliar;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c",&auxiliar);
    return auxiliar;
}


int esNumerico(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if(str[i] < '0' || str[i] > '9')
           return 0;
       i++;
   }
   return 1;
}


int esSoloLetras(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
           return 0;
       i++;
   }
   return 1;
}

void pedirTexto(char mensaje[],char input[])
{
    printf("%s",mensaje);
    scanf ("%s", input);
}

int ContieneSoloLetras(char mensaje[],char input[])
{
    char aux[256];
    pedirTexto(mensaje,aux);
    if(esSoloLetras(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

int contieneSoloNumeros(char mensaje[],char input[])
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


int minMaxArrayInt(int* pArray,int limite,int* minimo,int* maximo)
{
    int min=*minimo;
    int max=*maximo;
    int i;

    for (i=0; i<limite; i++)
    {
        if(i==0){
            min=pArray[i];
            max=pArray[i];
        }
        else
        {
            if (pArray[i]<min){
                min=pArray[i];
            }
            if (pArray[i]>max){
                max=pArray[i];
            }
        }
    }
    *minimo = min;
    *maximo = max;

   return 0;
}

int sumaArrayInt(int* pArray,int limite,int* resultado)
{
    int res=0;
    int i;

    for (i=0; i<limite; i++)
    {
        res=res+pArray[i] ;
    }

    *resultado = res;

   return 0;
}

int promedioArrayInt(int* pArray,int limite,int* resultadoProm)
{
    int res=0;
    int i;

    for (i=0; i<limite; i++)
    {
        res=res+pArray[i] ;
    }

    *resultadoProm = res/limite;

   return 0;
}

