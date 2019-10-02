#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayEmployees.h"
int initEmployees(Employee array[], int tamanio)
{
    int retorno=-1;
    int i;
    if(array !=NULL && tamanio>0)
    {
        for(i=0;i<tamanio;i++)
        {
            array[i].isEmpty=1;
        }
     retorno = 0;
    }
    return retorno;
}
