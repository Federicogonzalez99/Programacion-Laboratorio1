#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int dia;
    int anio;
    int mes;
}eFecha;
typedef struct
{
    int legajo;
    int edad;
    char sexo;
    int nota1;
    int nota2;
    float promedio;

    eFecha fecha;
}eEstudiantes;


int main()
{
    eEstudiantes vecAlumno[2];
    float promedio;
    int i;
    for(i=0;i<1;i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &vecAlumno[i].legajo);

        printf("Ingrese edad: ");
        scanf("%d", &vecAlumno[i].edad);

        printf("Ingrese sexo (M o F): ");
        fflush(stdin);
        scanf("%c", &vecAlumno[i].sexo);

        printf("Ingrese la primer nota: ");
        scanf("%d", &vecAlumno[i].nota1);

        printf("Ingrese la segunda nota: ");
        scanf("%d", &vecAlumno[i].nota2);

        printf("Ingrese dia: ");
        scanf("%d", &vecAlumno[i].fecha.dia);

        printf("Ingrese mes: ");
        scanf("%d", &vecAlumno[i].fecha.mes);

        printf("Ingrese anio: ");
        scanf("%d", &vecAlumno[i].fecha.anio);


    }

     for(i=0;i<1;i++)
        {
            promedio = (float)vecAlumno[i].nota1/vecAlumno[i].nota2;
            printf("\nLegajo: %d", vecAlumno[i].legajo);
            printf("\nEdad: %d", vecAlumno[i].edad);
            printf("\nSexo: %c", vecAlumno[i].sexo);
            printf("\nPrimer nota: %d", vecAlumno[i].nota1);
            printf("\nSegunda nota: %d", vecAlumno[i].nota2);
            printf("\nEl promedio es: %f", promedio);
            printf("\nDia: %d", vecAlumno[i].fecha.dia);
            printf("\nMes: %d", vecAlumno[i].fecha.mes);
            printf("\nAnio: %d", vecAlumno[i].fecha.anio);

        }
    return 0;
}
