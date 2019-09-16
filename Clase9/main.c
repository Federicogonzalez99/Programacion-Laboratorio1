#include <stdio.h>
#include <stdlib.h>
struct eFecha{
    int dia;
    int año;
    int mes;
};
struct eEstudiantes{
    int legajo;
    int edad;
    char sexo;
    int nota1;
    int nota2;
    float promedio;

    struct eFecha fecha;
};


int main()
{
    struct eEstudiantes vecAlumno[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &vecAlumno.legajo);
        printf("Ingrese edad: ");
        scanf("%d", &vecAlumno.edad);
        printf("Ingrese sexo (M o F)");
        scanf("%c", %vecAlumno.sexo);
        printf("Ingrese la primer nota: ");
        scanf("%d", &vecAlumno.nota1);
        printf("Ingrese la segunda nota: ");
        scanf("%d", &vecAlumno.nota2);
        printf("Ingrese dia: ");
        scanf("%d", &vecAlumno.fecha.dia);
        printf("Ingrese mes: ");
        scanf("%d", &vecAlumno.fecha.mes);
        printf("Ingrese año: ");
        scanf("%d", &vecAlumno.fecha.año);
    }
    return 0;
}
