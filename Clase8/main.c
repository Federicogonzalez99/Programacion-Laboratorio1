#include <stdio.h>
#include <stdlib.h>
int SoloNumeros(int* pResultado);
int EsNumerica(int* cadena);
int main()
{
    int cant, i;
    char cResp[10];
    int retorno = -1;
    printf("Ingrese un numero: ");

    return 0;

}
int SoloNumeros(int* pResultado)
{
    int ret = -1;
    char buffer[8];


    fgets(buffer,sizeof(buffer),stdin);
    buffer[strlen(buffer)-1]='\0';

    if(EsNumerica(buffer)==1)
        {
            *pResultado = atoi(buffer);
            ret = 1;

        }
            return ret;
}

int EsNumerica(int* cadena)
{
    int ret = -1;
    int cant;
    int i;
    cant = strlen(cadena);
    for(i=0;i<cant;i++)
      {
           if(cadena != NULL)
            {
           if(cadena[i]<'0' || cadena[i]>'9')
            break;
            ret = 1;
            }

      }
    return ret;
}
