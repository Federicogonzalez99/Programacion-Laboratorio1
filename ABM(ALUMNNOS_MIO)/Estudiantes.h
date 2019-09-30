#define TEXT_SIZE 30
#include "Carrera.h"
typedef struct
{
    int idCarrera;
    char descripcionCarrera[TEXT_SIZE];
    int isEmpty;
}eCarrera;

typedef struct
{
    int idEstudiante;
    char nombre[TEXT_SIZE];
    int edad;
    int idCarrera;
    int isEmpty;
}eEstudiante;

int estudiante_Inicializar(eEstudiante array[], int tamanio);
int estudiante_buscarID(eEstudiante array[], int tamanio, int valorBuscado, int* posicion);
int estudiante_modificar(eEstudiante array [], int tamanio);
int estudiante_buscarEmpty(eEstudiante array[], int tamanio, int* posicion);
int estudiante_alta(eEstudiante array[], int tamanio, int* contadorID);
int estudiante_baja(eEstudiante array [], int tamanio);
int estudiante_listar(eEstudiante array[], int tamanio, eCarrera arrayCarrera[], int tamanioCarrera);
int estudiante_BuscarCarrera(eCarrera arrayCarrera[], int tamanio, int buscar, char* descripcion);
int estudiante_ordenarPorString(eEstudiante array[],int size);
