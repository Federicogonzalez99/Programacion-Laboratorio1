#include <stdio.h>
#include <stdlib.h>


/**
 * \brief Inicializa un array de Personas con el valor recibido
 * \param array Es el array a ser inicializado
 * \param cantidadDeElementos Indica la logitud del array
 * \param valor Es el valor que sera cargado en cada posición
 * \return void
 *
 */
void inicializarArrayPersonas(ePersonas arrayPersonas[],int tamanio, int valor)
{
    int i;
    for(i=0; i < tamanio; i++)
    {
        arrayPersonas[i].legajo = valor;
    }
}
/**
 * \brief Busca la primer ocurrencia de un valor en un array de Personas
 * \param array Es el array en el cual buscar
 * \param cantidadDeElementos Indica la logitud del array
 * \param valor Es el valor que se busca
 * \return Si no hay ocurrencia (-1) y si la hay, la posición de la misma
 *
 */
int buscarLugarLibre(ePersonas arrayPersonas[], int tamanio, int valor)
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
/**
 * \brief Pide un número al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */
int pedirInt(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}
/**
 * \brief pide un caracter al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El caracter ingresado por el usuario
 *
 */
char pedirChar(char mensaje[])
{
    char auxiliar;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c",&auxiliar);
    return auxiliar;
}
/**
 * \brief Verifica si el valor recibido es numérico
 * \param str Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */

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
/**
 * \brief Verifica si el valor recibido contiene solo letras
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo ' ' y letras y 0 si no lo es
 *
 */
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
/**
 * \brief Pide un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return void
 */
void pedirTexto(char mensaje[],char input[])
{
    printf("%s",mensaje);
    scanf ("%s", input);
}
/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo letras
 */
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
/**
 * \brief Solicita un texto numérico al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo números
 */
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

/** \brief Busca el minimo y maximo en un array
 *
 * \param Array por referencia
 * \param Elementos del Array
 * \param minimo a devolver por referencia
 * \param maximo a devolver por referencia
 * \return return 0
 *
 */
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
/** \brief Suma los elementos de un array
 *
 * \param Array por referencia
 * \param Elementos del Array
 * \param la suma por referencia
 * \return return 0
 *
 */
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
/** \brief Promedio de los elementos de un array
 *
 * \param Array por referencia
 * \param Elementos del Array
 * \param el promedio por referencia
 * \return return 0
 *
 */
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
