#ifndef ESTUDIANTE_H_INCLUDED
#define ESTUDIANTE_H_INCLUDED

#define TEXT_SIZE 20

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


void inicializarArrayPersonas(ePersonas arrayPersonas[],int tamanio, int valor);
int buscarLugarLibre(ePersonas arrayPersonas[], int tamanio, int valor);
int pedirInt(char mensaje[]);
char pedirChar(char mensaje[]);
int esNumerico(char str[]);
int esSoloLetras(char str[]);
void pedirTexto(char mensaje[],char input[]);
int contieneSoloLetras(char mensaje[],char input[]);
int contieneSoloNumeros(char mensaje[],char input[]);
int minMaxArrayInt(int* pArray,int limite,int* minimo,int* maximo);
int sumaArrayInt(int* pArray,int limite,int* resultado);
int promedioArrayInt(int* pArray,int limite,int* resultadoProm);
