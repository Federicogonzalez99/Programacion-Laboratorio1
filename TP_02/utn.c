#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayEmployees.h"
#include "utn.h"
#define MAX 30
int utn_PedirEntero(char* msg,char* msgError,int minSize,int maxSize,int min,int max,int reintentos,int* input)
{
    int retorno=-1;
    char bufferStr[maxSize];

    if(msg!=NULL && msgError!=NULL && minSize<maxSize && min<max && reintentos>=0 && input!=NULL)
    {
        do
        {
            if(utn_PedirString(msg,msgError,minSize,maxSize,&reintentos,bufferStr)==0)
            {
                if(utn_esNumerico(bufferStr)==1)
                {
                    if(utn_validarRango(bufferStr, min, max)== 0)
                    {

                    *input=atoi(bufferStr);
                    retorno=0;
                    break;
                    }

                }
                else
                {
                    printf("%s 2",msgError);
                    reintentos--;
                }
            }
        }
        while(reintentos>=0);
    }
    return retorno;
}
int utn_PedirString(char* msg, char* msgError, int min, int max, int* reintentos, char* resultado)
{
    int retorno=-1;
    char bufferStr[MAX];

    if(msg!=NULL && msgError!=NULL && min<=max && reintentos>=0 && resultado!=NULL)
    {
        do
        {
            printf("%s",msg);   //no poner salto de linea, se va a pasar en el mensaje por valor
            //fflush(stdin);
            fgets(bufferStr,sizeof(bufferStr),stdin);
            bufferStr[strlen(bufferStr)-1]='\0';

            if(strlen(bufferStr)>=min && strlen(bufferStr)<max)    // tamaño (max) =cantidad de elementos (strlen) + 1(\0)
            {
                strncpy(resultado,bufferStr,max);
                retorno=0;
                break;
            }
            printf("%s 1",msgError);
            (*reintentos)--;
        }while((*reintentos)>=0);
    }
    return retorno;


}
int utn_esNumerico(char* stringRecibido)
{
    int retorno=1;
    int i;
    for(i=0;stringRecibido!='\0';i++)
    {
        if(stringRecibido[i] < '0' || stringRecibido[i] > '9')
            retorno = 0;
        break;
    }
    return retorno;
}
int utn_validarRango(char* stringRecibido, int min, int max)
{
    int retorno = -1;
    int auxBuffer;
    auxBuffer=atoi(stringRecibido);
    if(auxBuffer >= min && auxBuffer <= max)
    {
        retorno = 0;
    }
    return retorno;
}
