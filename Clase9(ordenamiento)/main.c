#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char nombre[20];
    char apellido[20];
    char calle[20];
    int numero;
}eDatosPersonales;
int main()
{
    eDatosPersonales vecAgenda[3], aux;
    int i,j;
    for(i=0;i<3;i++)
    {
        printf("\nIngrese Nombre: ");
        gets(vecAgenda[i].nombre);
        printf("\nIngrese Apellido: ");
        gets(vecAgenda[i].apellido);
        printf("\nIngrese Calle: ");
        gets(vecAgenda[i].calle);
        printf("Ingrese Numero: ");
        scanf("%d", vecAgenda[i].numero);
    }
    for(i=0;i<3;i++)
    {
        printf("\nNombre: %s", vecAgenda[i].nombre);
        printf("\nApellido: %s", vecAgenda[i].apellido);
        printf("\nCalle: %s", vecAgenda[i].calle);
        printf("\nNumero: %d", vecAgenda[i].numero);
    }
    for(i=0;i<3-1;i++)
    {
        for(j=i+1;j<3;j++)
        {

            if((strcmp(vecAgenda[i].nombre, vecAgenda[j].nombre))>0)
            {
                aux=vecAgenda[i];
                vecAgenda[i]=vecAgenda[j];
                vecAgenda[j]=aux;
            }
            if((strcmp(vecAgenda[i].nombre, vecAgenda[j].nombre))==0)
            {
               if((strcmp(vecAgenda[i].apellido, vecAgenda[j].apellido))>0)
               {
                    aux=vecAgenda[i];
                    vecAgenda[i]=vecAgenda[j];
                    vecAgenda[j]=aux;
               }
            }
        }
    }
    return 0;
}
