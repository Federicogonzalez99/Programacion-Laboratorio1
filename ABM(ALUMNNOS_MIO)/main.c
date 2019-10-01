#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Estudiantes.h"
#include "utn.h"
#include "Carrera.h"
#define QTY_TIPO 3


int main()
{
    int opcion;
    int contadorEstudiantes = 0;
    int contadorIDCurso = 0;
    char buscar[50];

    eEstudiante arrayEstudiante[QTY_TIPO];
    eCurso arrayCurso[QTY_TIPO];
    estudiante_Inicializar(arrayCurso, QTY_TIPO);

    eMateria arrayMateria[QTY_TIPO]={
        {1,"Programacion I",0},
        {2,"Base de Datos",0},
        {3,"Matematica",0}
        };

    estudiante_Inicializar(arrayEstudiante, QTY_TIPO);


    do
    {
        estudiante_listarMaterias(arrayMateria, QTY_TIPO);
        utn_PedirEntero("\n1)Alta \n2)Modificar \n3)Baja \n4)Listar \n5)Ordenar \n6)Alta Curso \n7)Listar Cursos \n8)Materias por Alumno \n9)Salir\n","\nError",1,sizeof(int),1,11,1,&opcion);
        switch(opcion)
        {
            case 1: //alta
                    estudiante_alta(arrayEstudiante, QTY_TIPO, &contadorEstudiantes);
                break;
            case 2:
                    estudiante_modificar(arrayEstudiante, QTY_TIPO);
                break;
            case 3:
                estudiante_baja(arrayEstudiante,QTY_TIPO);
                break;
            case 4:
                estudiante_listar(arrayEstudiante,QTY_TIPO,arrayMateria, QTY_TIPO);
                break;
            case 5:
                estudiante_ordenarPorString(arrayEstudiante, QTY_TIPO);
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                break;
            default:
                printf("\nOpcion no valida");
        }

    }while(opcion!=6);
    return 0;
}



