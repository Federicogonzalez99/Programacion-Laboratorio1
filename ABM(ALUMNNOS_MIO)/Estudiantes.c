#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Estudiantes.h"
#include "Carrera.h"
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
            utn
        }
    }
}
