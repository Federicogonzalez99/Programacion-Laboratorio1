#include <stdio.h>
#include <stdlib.h>
#include "../UTN_Array.h"
#include "../UTN_Inputs.h"
#define QTY_EDADES 5
#define VALOR_INICIAL 0


int main()
{
int edades[QTY_EDADES];
int minimo, maximo, suma, promedio,cant;
//Inicializar
initArrayInt(edades,QTY_EDADES,VALOR_INICIAL);
//Imprime
printArrayInt(edades,QTY_EDADES);
cant = getArrayInt(edades,QTY_EDADES,"Ingrese edad: ","Error. ", 1,100,3);
printf("%d", cant);
printArrayInt(edades,QTY_EDADES);
OrdenaArrayInt(edades,QTY_EDADES);
printArrayInt(edades,QTY_EDADES);

    return 0;
}

