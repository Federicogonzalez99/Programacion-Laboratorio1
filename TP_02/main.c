#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"
#include "utn.h"
#define MAX 30
#define TAM_EMP 5
int main()
{
    int opcion;
    int contadorID=0;
    int flag = 0;
    char auxNombre[MAX];
    char auxApellido[MAX];
    float auxSalario;
    int sector;
    int r;
    Employee vecEmployee[TAM_EMP];
    initEmployees(vecEmployee, TAM_EMP);
    do
    {
        utn_PedirEntero("\n1.Alta\n2.Modificar\n3.Baja\n4.Informar\n5.Salir\n","Error",1,sizeof(int),1,5,3,&opcion);
        switch(opcion)
        {
        case 1:
                utn_pedirNombre("Ingrese Nombre: ", "Error", 1, MAX, 2, auxNombre);
                utn_pedirNombre("Ingrese Apellido: ", "Error", 1 , MAX, 2, auxApellido);
                utn_pedirFloat("Ingrese salario (00.0): ", "Error", 1, 100000,1,100000,2,&auxSalario);
                utn_PedirEntero("Ingrese sector: ", "Error", 1,sizeof(int),1,9,2,&sector);
                r = addEmployee(vecEmployee,TAM_EMP,&contadorID,auxNombre,auxApellido,auxSalario,sector);
                if(r==0)
                {
                    printf("La carga del empleado se hizo exitosamente");
                    printf("\nEl ID del empleado es: %d", contadorID);
                }
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5: //salir
            break;
        default:
            printf("La opcion no existe");
            }
    }while(opcion!=5);
    return 0;
}
