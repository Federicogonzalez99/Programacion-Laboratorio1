#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero [5];
    int i;
    for(i=0;i<5;i++){
        printf("Ingrese un numero: ");
        scanf("%d", &numero[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\nEl numero es: %d ", numero[i]);
    }
    return 0;
}
