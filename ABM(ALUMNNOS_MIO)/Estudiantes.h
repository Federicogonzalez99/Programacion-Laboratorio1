#define TEXT_SIZE 30

typedef struct
{
    int idEstudiante;
    char nombre[TEXT_SIZE];
    int edad;
    int idCarrera;
    int isEmpty;
}eEstudiante;

int estudiante_Inicializar(eEstudiante array[], int tamanio);
