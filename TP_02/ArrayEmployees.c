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
int addEmployee(Employee array[], int len, int* id, char name[],char lastName[],float salary,int sector)
{
    int i;
    int retorno = -1;
    int posicion;
    if(array!=NULL && len>0 && id!=NULL && name!=NULL && lastName!=NULL && salary>0 && sector>0)
    {
        if(buscarLugar(array,len,&posicion)==0)
        {
            strcpy(array[posicion].name,name);
            strcpy(array[posicion].lastName, lastName);
            array[posicion].salary=salary;
            array[posicion].sector=sector;
            array[posicion].isEmpty=0;
            (*id)++;
            array[posicion].id=*id;
            retorno = 0;
        }
        else
            printf("No hay lugares vacios");
    }
    return retorno;
}
