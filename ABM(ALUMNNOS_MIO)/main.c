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

    eEstudiante arrayEstudiante[QTY_TIPO];

    eCarrera arrayCarrera[QTY_TIPO]={
    {1,"TSP",0},
    {2,"TSAS",0}
    };

    estudiante_Inicializar(arrayEstudiante, QTY_TIPO);


    do
    {
        utn_PedirEntero("\n\n1) Alta \n2) Modificar \n3) Baja \n4) Listar \n5) Ordenar \n6) Salir\n",                   //cambiar
                      "\nError",1,sizeof(int),1,11,1,&opcion);
        switch(opcion)
        {
            case 1: //alta
                    estudiante_alta(arrayEstudiante, QTY_TIPO, &contadorEstudiantes);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            default:
                printf("\nOpcion no valida");
        }

    }while(opcion!=6);
    return 0;
}



