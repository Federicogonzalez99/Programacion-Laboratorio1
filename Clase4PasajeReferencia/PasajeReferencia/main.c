//Realizar una funcion que reciba la cantidad de numeros a pedir,
//la funcion los pida por teclado, obtenga el minimo y maximo
/ /ingresado y los informe.

#include <stdio.h>
#include <stdlib.h>

int calcularMinMax(int cantPedidos,int* min,int* max);

int main()
{
int minimo;
int maximo;
int pedidos;
int res;


    printf("\nCantidad de numeros a pedir");
    scanf("%d", &pedidos);
    if((res = calcularMinMax(pedidos, &minimo, &maximo))==0)
    {
        printf("minimo = %d ", minimo);
        printf("maximo = %d ", maximo);
    }else
        {
            printf("Error. No se pudo buscar minimo y maximo");
        }

    return 0;
}
int calcularMinMax(int cantPedidos,int* min,int* max)
{
    int i;
    int num;
    int valorMin;
    int valorMax;
    int flag=0;
    valorMin = *min;
    valorMax = *max;

    for(i=0;i<cantPedidos; i++)
    {
        printf("\nIngrese un numero ");
        scanf("%d", &num);
        if(flag==0 || num<valorMin)
        {
            valorMin=num;
        }
        if (flag==0 || num>valorMax)
        {
            valorMax=num;
            flag = 1;
        }
    }

    *min = valorMin;
    *max = valorMax;

 return 0;
}
