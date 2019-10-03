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
            printf("%s",msg);

            fgets(bufferStr,sizeof(bufferStr),stdin);
            bufferStr[strlen(bufferStr)-1]='\0';

            if(strlen(bufferStr)>=min && strlen(bufferStr)<max)
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
int buscarLugar(Employee array [], int tamanio,int* posicion)
{
    int i;
    int retorno = -1;
    if(array!=NULL && tamanio>0 && posicion!=NULL)
    {
        for(i=0;i<tamanio;i++)
        {
            if(array[i].isEmpty==1)
            {
                retorno = 0;
                *posicion = i;
                break;
            }
        }
    }
    return retorno;
}
int utn_pedirNombre(char* msg, char* msgError, int min, int max, int reintentos, char* resultado)
{
    int retorno = -1;
    char bufferStr[max];
    if(msg!=NULL && msgError!=NULL && min<=max && reintentos>=0 && resultado!=NULL)
    {
        do
        {
            if(!utn_PedirString(msg, msgError, min, max, &reintentos, bufferStr))
            {
                if(utn_validarNombre(bufferStr)==1)
                {
                    strncpy(resultado,bufferStr,max);
                    retorno=0;
                    break;
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
int utn_pedirFloat(char* msg, char* msgError, int minSize, int maxSize, int min, int max, int reintentos, float* input)
{
    int retorno=-1;
    char bufferStr[maxSize];

    if(msg!=NULL && msgError!=NULL && minSize<maxSize && min<max && reintentos>=0 && input!=NULL)
    {
        do
        {
            if(!utn_PedirString(msg,msgError,minSize,maxSize,&reintentos,bufferStr))
            {
                if(esFloat(bufferStr)==1)
                {
                    if(utn_validarRango(bufferStr,min,max)==0)
                    {
                        *input=atof(bufferStr);
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
int esFloat(char* stringRecibido)
{
    int retorno=1;
    int i;
    for(i=0;stringRecibido[i]!='\0';i++)
    {
        if((stringRecibido[i]<'0' || stringRecibido[i]>'9') && (stringRecibido[i]!='.'))
        {
            retorno=0;
            break;
        }
    }
    return retorno;
}

int utn_validarNombre(char* stringRecibido)
{
    int retorno=1;
    int i;
    for(i=0;stringRecibido[i]!='\0';i++)
    {

        if(stringRecibido[i]<'A' || (stringRecibido[i]>'Z' && stringRecibido[i]<'a') || stringRecibido[i]>'z')
        {
            retorno=0;
            break;
        }
    }
    return retorno;
}
