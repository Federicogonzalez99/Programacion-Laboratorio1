#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"
#include "utn.h"
#define TAM_EMP 5
int main()
{
    int opcion;
    int contadorID=0;
    Employee vecEmployee[TAM_EMP];
    initEmployees(vecEmployee, TAM_EMP);
    do
    {
        utn_PedirEntero("\n1.Alta\n2.Modificar\n3.Baja\n4.Informar\n5.Salir\n","Error",1,sizeof(int),1,5,3,&opcion);
        switch(opcion)
        {
        case 1:

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
