#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char nombre[20];
    char apellido[20];
    char calle[20];
    int numero;
}datosPersonales;
//struct alumno (legajo, sexo, edad, nota1, nota2, promedio, estructura anidad de fecha(dia mes año)
int main()
{
    datosPersonales agenda;
    printf("Ingrese el nombre: ");
    gets(agenda.nombre);
    fflush(stdin);

    printf("Ingrese el apellido: ");
    gets(agenda.apellido);
    fflush(stdin);

    printf("Ingrese la calle: ");
    gets(agenda.calle);
    fflush(stdin);

    printf("Ingrese el numero: ");
    scanf("%d", agenda.numero);


    printf("\nDATOS PERSONALES\N");
    printf("%s", agenda.nombre);
    printf("%s", agenda.apellido);
    printf("%s", agenda.calle);
    printf("%d", agenda.numero);
    return 0;
}
