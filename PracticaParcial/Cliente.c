#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Cliente.h"
#include "utn.h"
#define TEXT_SIZE 30
int cliente_inicializar(eCliente array[], int tamanio)
{
    int i;
    int retorno = -1;
    if(array!=NULL && tamanio >0)
    {
        for(i=0;i<tamanio;i++)
        {
            array[i].estado=1;
        }
        retorno = 0;
    }
    return retorno;
}
int cliente_alta(eCliente array[], int tamanio,int* contadorCliente)
{
    int retorno = -1;
    int posicion;
    if(array!=NULL && tamanio>0 && contadorCliente!=NULL)
    {
            if(cliente_buscarLugarVacio(array,tamanio,&posicion)==-1)
            {
                printf("No hay lugares vacios");
            }
            else
            {
              (*contadorCliente)++;
              array[posicion].idCliente = *contadorCliente;
              utn_pedirNombre("Ingrese nombre: ", "Error", 1, TEXT_SIZE,3,array[posicion].nombre);
              utn_pedirNombre("Ingrese apellido: ", "Error",1,TEXT_SIZE,3,array[posicion].apellido);
              array[posicion].estado=0;
              utn_PedirEntero("Ingrese CUIT: ", "Error",1,sizeof(int),1,sizeof(int),3,&array[posicion].cuit);

              retorno = 0;
            }

    }
    return retorno;
}
int cliente_buscarLugarVacio(eCliente array[], int tamanio, int* posicion)
{
    int i;
    int retorno;
    if(array!=NULL && tamanio>0 && posicion!=NULL)
    {
        for(i=0;i<tamanio;i++)
        {
            if(array[i].estado==1)
            {
                *posicion = i;
                retorno = 0;
                break;
            }
        }
    }
    return retorno;
}
