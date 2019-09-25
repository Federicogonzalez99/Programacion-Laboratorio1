#define TEXT_SIZE 30

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
    int idCarrera;
    char descripcionCarrera[TEXT_SIZE];
    int isEmpty;
}eCarrera;
