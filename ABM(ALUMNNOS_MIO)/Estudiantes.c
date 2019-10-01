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
            utn_pedirNombre("\nIngrese Nombre: ", "Error", 1, TEXT_SIZE,2,array[posicion].nombre);
            array[posicion].isEmpty = 0;
            utn_PedirEntero("\nIngrese carrera (1.Programacion I - 2.Base de Datos - 3.Matematica): " , "Error", 1, sizeof(int),1,3,2,&array[posicion].idCarrera);
        retorno = 0;
        }
    }
    return retorno;
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
int estudiante_modificar(eEstudiante array [], int tamanio)
{
    int retorno = -1;
    int posicion;
    int id;
    char opcion;
    if(array!=NULL && tamanio>0)
    {
        utn_PedirEntero("\nID a modificar: ", "Error", 1, sizeof(int), 1, tamanio, 1, &id);
        if(estudiante_buscarID(array, tamanio, id, &posicion)== -1)
        {
            printf("El ID no existe");
        }
        else
        {
            do
               {
                   utn_PedirChar("\nModificar: \nA-Nombre \nB-Edad \nS(salir): ","\nError",'A','Z',1,&opcion);
                   switch(opcion)
                   {
                   case 'A':
                    utn_pedirNombre("\nIngrese el nuevo nombre: ", "Error", 1, TEXT_SIZE, 1, array[posicion].nombre);
                    break;
                   case 'B':
                    utn_PedirEntero("\nIngrese la nueva edad: ", "Error", 1, sizeof(int), 18, 100, 2, &array[posicion].edad);
                    break;
                   case 'S':
                    break;
                   default:
                    printf("Opcion no valida");
                   }

               }while(opcion!='S');
              retorno = 0;
        }

    }
       return retorno;
}

int estudiante_buscarID(eEstudiante array[], int tamanio, int valorBuscado, int* posicion)
{
    int i;
    int retorno = -1;
    if(array!=NULL && tamanio > 0)
    {
        for(i=0;i<tamanio;i++)
        {
            if(array[i].isEmpty==1)
                continue;
            else if(array[i].idEstudiante==valorBuscado)
            {
                retorno = 0;
                *posicion = i;
                break;
            }
        }
    }
    return retorno;
}
int estudiante_baja(eEstudiante array [], int tamanio)
{
    int retorno = -1;
    int id;
    int posicion;
    if(array!=NULL && tamanio>0)
    {
        utn_PedirEntero("\nID a dar de baja: ", "Error", 1, sizeof(int), 1, tamanio, 2, &id);
        if(estudiante_buscarID(array, tamanio, id, &posicion)==-1)
        {
            printf("No existe el ID");
        }
        else
        {
            array[posicion].isEmpty=1;
            array[posicion].idEstudiante=0;
            array[posicion].idCarrera=0;
            array[posicion].edad=0;
            strcpy(array[posicion].nombre,"");
            retorno=0;
        }
    }
    return retorno;
}
int estudiante_listar(eEstudiante array[], int tamanio, eMateria arrayMateria[], int tamanioMateria)
{
    int retorno = -1;
    int i;
    char DescrMateria[20];
    if(array!=NULL && tamanio >0)
    {
        for(i=0;i<tamanio;i++)
        {
            if(array[i].isEmpty==1)
                continue;
            else
            {
                estudiante_BuscarMateria(arrayMateria, tamanio, arrayMateria[i].idMateria,DescrMateria);
                printf("\n ID: %d\n edad: %d\n nombre: %s\n Materia: %d\n descCarrera %s",array[i].idEstudiante,array[i].edad,array[i].nombre, arrayMateria[i].idMateria, DescrMateria);


            }
        }
        retorno = 0;
    }
    return retorno;
}
int estudiante_BuscarMateria(eMateria arrayMateria[], int tamanio, int buscar, char* descripcion)
{
    int i;
    for(i=0;i<tamanio;i++)
    {
        if(arrayMateria[i].idMateria==buscar)
        {
            strcpy(descripcion,arrayMateria[i].descripcionMateria);
        }
    }
    return 0;
}
int estudiante_ordenarPorString(eEstudiante array[],int size)                              //cambiar estudiante
{

    int retorno=-1;
    int i, j;
    char bufferString[TEXT_SIZE];                               //cambiar campo varString
    int bufferId;
    int bufferIsEmpty;
    int bufferInt;                                              //cambiar buffer int
    int bufferCarrera;
    //float bufferFloat;                                          //cambiar buffer varFloat
    //char bufferLongString[TEXT_SIZE];                           //cambiar campo varLongString

    if(array!=NULL && size>=0)
    {
        for (i = 1; i < size; i++)
        {
            strcpy(bufferString,array[i].nombre);                      //cambiar campo varString
            bufferId=array[i].idEstudiante;                                   //cambiar campo id
            bufferIsEmpty=array[i].isEmpty;
            bufferInt=array[i].edad;                                //cambiar campo varInt
            bufferCarrera=array[i].idCarrera;
            //bufferFloat=array[i].varFloat;                            //cambiar campo varFloat
            //strcpy(bufferLongString,array[i].varLongString);          //cambiar campo varLongString


            j = i - 1;
            while ((j >= 0) && strcmp(bufferString,array[j].nombre)<0)         //cambiar campo varString                 //Si tiene mas de un criterio se lo agrego, Ej. bufferInt<array[j].varInt
            {                                                                                                               //buffer < campo ascendente   buffer > campo descendente
                strcpy(array[j + 1].nombre,array[j].nombre);          //cambiar campo varString
                array[j + 1].idEstudiante=array[j].idEstudiante;                                //cambiar campo id
                array[j + 1].isEmpty=array[j].isEmpty;
                array[j + 1].edad=array[j].edad;                        //cambiar campo varInt
                array[j + 1].idCarrera=array[j].idCarrera;                        //cambiar campo varInt
                //array[j + 1].varFloat=array[j].varFloat;                    //cambiar campo varFloat
                //strcpy(array[j + 1].varLongString,array[j].varLongString);  //cambiar campo varLongString

                j--;
            }
            strcpy(array[j + 1].nombre,bufferString);                     //cambiar campo varString
            array[j + 1].idEstudiante=bufferId;                                        //cambiar campo id
            array[j + 1].isEmpty=bufferIsEmpty;
            array[j + 1].edad=bufferInt;                                                        //cambiar campo varInt
            array[j + 1].idCarrera=bufferCarrera;                                                        //cambiar campo varInt
            //array[j + 1].varFloat=bufferFloat;                                                    //cambiar campo varFloat
            //strcpy(array[j + 1].varLongString,bufferLongString);                                  //cambiar campo varLongString
        }
        retorno=0;
    }
    return retorno;
}
int estudiante_listarMaterias(eMateria array[], int tamanio)
{
    int retorno = -1;
    int i;
    if(array!=0 && tamanio >0)
    {
        for(i=0;i<tamanio;i++)
        {
            if(array[i].isEmpty==1)
                continue;
            else
            {
                printf("\n IDMateria: %d - Nombre: %s", array[i].idMateria,array[i].descripcionMateria);
            }
        }
        retorno = 0;
    }
    return retorno;
}
int estudiante_AltaCurso(eCurso array[], int tamanio, eEstudiante arrayEstudiante[], int tamanioEst, int* contadorIDCurso)
{
    int retorno=-1;
    int posicion;
    int legajoEstudiante;
    int legajoEncontrado;
    if(array!=NULL && tamanio >0 && contadorIDCurso!=NULL)
    {
        if(estudiante_buscarEmptyCurso(array, tamanio, &posicion)==-1)
        {
            printf("No hay lugares vacios");
        }
        else
        {
            (*contadorIDCurso)++;
            array[posicion].idCurso=*contadorIDCurso;
            utn_PedirEntero("\nIngrese el ID del alumno", "Error en el ID", 1, sizeof(int),1,tamanio,2,&legajoEstudiante);
            if(estudiante_buscarID(arrayEstudiante,tamanioEst,legajoEstudiante,&legajoEncontrado)==0)
            {
                array[posicion].idEstudiante=legajoEstudiante;
            }
            else
            {
                printf("Legajo no existe");
                return -1;
            }
            utn_PedirEntero("Ingrese ID Materia: ", "Error", 1, sizeof(int), 1, 3,2,&array[posicion].idMateria);
            utn_PedirEntero("Ingrese Nota: ", "Error", 1, sizeof(int), 0 , 10,2,&array[posicion].nota);
            array[posicion].isEmpty=0;
           retorno=0;
        }
    }
    return retorno;
}

int estudiante_buscarEmptyCurso(eCurso array[], int tamanio, int* posicion)
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
int estudiante_ListarCursos(eCurso array[], int tamanio)
{
    int i;
    int retorno = -1;
    if(array!=NULL && tamanio >0)
    {
        for(i=0;i<tamanio;i++)
        {
            if(array[i].isEmpty==1)
                continue;
            else
                printf("\n IDCurso: %d - Legajo: %d Materia: &d Nota: %d",
                       array[i].idCurso,array[i].idEstudiante, array[i].idMateria, array[i].nota);

        }
        retorno=0;
    }
    return retorno;
}
int estudiante_buscarIDCurso(eCurso array[], int tamanio, int valorBuscado, int posicion)
{
    int retorno = -1;
    if(array!=NULL && tamanio>0)
    {
        if(array[posicion].idEstudiante==valorBuscado)
        {
            if(array[posicion].isEmpty==0)
            {
                retorno = 0;
            }
        }
    }
    return retorno;
}


