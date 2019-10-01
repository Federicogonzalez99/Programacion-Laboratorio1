#define TEXT_SIZE 30
#include "Carrera.h"
typedef struct
{
    int idMateria;
    char descripcionMateria[TEXT_SIZE];
    int isEmpty;
}eMateria;

typedef struct
{
    int idEstudiante;
    char nombre[TEXT_SIZE];
    int edad;
    int idCarrera;
    int isEmpty;
}eEstudiante;
typedef struct
{
    int idCurso;
    int idEstudiante;
    int idMateria;
    int nota;
    int isEmpty;
    //-----------------
}eCurso;
int estudiante_Inicializar(eEstudiante array[], int tamanio);
int estudiante_buscarID(eEstudiante array[], int tamanio, int valorBuscado, int* posicion);
int estudiante_modificar(eEstudiante array [], int tamanio);
int estudiante_buscarEmpty(eEstudiante array[], int tamanio, int* posicion);
int estudiante_alta(eEstudiante array[], int tamanio, int* contadorID);
int estudiante_baja(eEstudiante array [], int tamanio);
int estudiante_listar(eEstudiante array[], int tamanio, eMateria arrayMateria[], int tamanioMateria);
int estudiante_BuscarMateria(eMateria arrayMateria[], int tamanio, int buscar, char* descripcion);
int estudiante_ordenarPorString(eEstudiante array[],int tamanio);
int estudiante_listarMaterias(eMateria arrayMateria[], int tamanio);
int estudiante_AltaCurso(eCurso array[], int tamanio, eEstudiante arrayEstudiante[], int tamanioEst, int* contadorIDCurso);
int estudiante_buscarEmptyCurso(eCurso array[], int tamanio, int* posicion);
int estudiante_ListarCursos(eCurso array[], int tamanio);
int estudiante_buscarIDCurso(eCurso array[], int tamanio, int valorBuscado, int posicion);
