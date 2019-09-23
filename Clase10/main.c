#include <stdio.h>
#include <stdlib.h>
#include "../bibliotecas/BibliotecasUTN.h"
typedef struct
{
    char nombre[30];
    char apellido[30];
    int legajo;
    int idCarrera;
    int estado;
}eEstudiante;

typedef struct
{
    int idCarrera;
    char descripcion[20];
    int estado;
}eCarrera;

int main()
{
    eEstudiante vecEstudiante[5];
    eCarrera vecCarrera[2]={
    {1, "TSP",0}
    {2, "TSSI", 0}
    };

    do
    {
        inicializarArrayPersonas(vecEstudiante, 5, -1);
    }
   return 0;
}
