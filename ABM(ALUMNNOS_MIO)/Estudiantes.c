#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Estudiantes.h"
#include "Carrera.h"
#include "utn.h"
int estudiante_Inicializar(eEstudiante array[], int tamanio)

{
    int retorno = -1;
    int i;
    if(array!=NULL && tamanio>0)
    {
    for(i=0; i<tamanio; i++)
        {
            array[i].isEmpty = 1;
        }
        retorno = 0;
    }
    return retorno;
}
int estudiante_alta(eEstudiante array[], int tamanio, int* contadorID)
{
    int retorno = -1;
    int posicion;
    if(array != NULL && tamanio > 0 && contadorID != NULL)
    {
        if(estudiante_buscarEmpty(array, tamanio, &posicion)==-1)
        {
            printf("\nNo hay lugares vacios");
        }
        else
        {
            (*contadorID)++;
            array[posicion].idEstudiante = *contadorID;
            utn_PedirEntero("\nIngrese una edad entre 18 y 100: ", "\nError",1,sizeof(int),18,100,2,&array[posicion].edad);
            utn_pedirNombre("\nIngrese Nombre: ", "Error", 1, TEXT_SIZE,2,&array[posicion].nombre);
            array[posicion].isEmpty = 0;
            utn_PedirEntero("\nIngrese carrera (1 o 2): ", "Error", 1, sizeof(int),1,2,2,&array[posicion].idCarrera);

        }
    }
}
int estudiante_buscarEmpty(eEstudiante array[], int tamanio, int* posicion)
{
    int retorno = -1;
    int i;
    if(array!=NULL && tamanio>=0 && posicion!=NULL)
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







