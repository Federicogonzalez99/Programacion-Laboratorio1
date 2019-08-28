#include <stdio.h>
#include <stdlib.h>

int sumar(int, int);
int restar(int, int);
int multiplicar(int, int);
float dividir(int, int);

int main()
{
    int valor1;
    int valor2;
    float total;
    char opcion;

    printf("Ingrese un numero: ");
    scanf("%d", &valor1);
    fflush(stdin);
    printf("Ingrese otro numero: ");
    scanf("%d", &valor2);
    fflush(stdin);

    printf("Ingrese la opcion que quiera realizar:\n M.(Multiplicar)\n S.(Sumar)\n R.(Restar)\n D.(Dividir)\n");
    scanf("%c",&opcion);
    switch(opcion)
    {
        case 'm':
            total = multiplicar(valor1, valor2);
            break;
        case 's':
            total = sumar(valor1, valor2);
            break;
        case 'r':
            total = restar(valor1, valor2);
            break;
        case 'd':
            total = dividir(valor1, valor2);
            break;
        default:
            break;
    }
     printf("El resultado es: %.2f",total);
    return 0;
}
int sumar(int numero1, int numero2)
{
    int respuesta;
    respuesta = numero1 + numero2;
    return respuesta;
}

int restar(int numero1, int numero2)
{
    int respuesta;
    respuesta = numero1 - numero2;
    return respuesta;
}

int multiplicar(int numero1, int numero2)
{
    int respuesta;
    respuesta = numero1 * numero2;
    return respuesta;
}

float dividir(int numero1, int numero2)
{
    float respuesta;
    respuesta = (float)numero1 / numero2;
    return respuesta;
}



