#include <stdio.h>
#include <stdlib.h>
#define QTY_PERSONAS 5
typedef struct
{
    char nombre[50];
    char apellido[50];
    int legajo;
}ePersonas;

void inicializarArrayPersonas(ePersonas arrayPersonas[],int tamanio, int valor);
int buscarLugarLibre(ePersonas arrayPersonas[], int tamanio, int valor);

int main()
{
    ePersonas arrayPersonas[QTY_PERSONAS];
    int opcion, indiceLugarLibre;
    inicializarArrayPersonas(arrayPersonas, QTY_PERSONAS, -1);
    printf("\n1.ALTA \n2.BAJA \n3.MODIFICACIONES \n4.LISTAR \n5.ORDENAR \n6.INFORMES \n7.SALIR\n");
    scanf("%d", &opcion);
    while(opcion != 7){
    switch (opcion)
    {
        case 1:
            indiceLugarLibre = buscarLugarLibre(arrayPersonas, QTY_PERSONAS, -1);
            if(indiceLugarLibre == -1)
            {
                printf("\n¡¡NO HAY MAS LUGAR!!");
                break;
            }
    }
    }
    return 0;
}
void inicializarArrayPersonas(ePersonas arrayPersonas[],int tamanio, int valor)
{
    int i;
    for(i=0; i < tamanio; i++)
    {
        arrayPersonas[i].legajo = valor;
    }
}
int buscarLugarLibre(ePersonas arrayPersonas[], int tamanio, int valor)
{
    int i;
    int posicion = -1;
    for(i=0; i < tamanio; i++)
    {
        if(arrayPersonas[i].legajo == valor)
         {
             posicion = i;
                break;
         }
    }
    return posicion;
}
