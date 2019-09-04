/*
 ============================================================================
 Name        : Clase.c
 Author      : Agustin
 Version     :
 Copyright   : GLP 3
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int calculoMaxYMin(int *flagFun,int numeroFun,int *MaxFun, int *MinFun);


#define MSG_EDAD "Ingrese edad:"
#define MSG_DNI "Ingrese DNI:"
#define MSG_ERR "naahh esta mall.\n"

int main(void)
{
	int numero;
	char respuesta;
	int Max = 0;
	int Min = 0;
	int flag = 0;
	//calcularPromedio(5,1);
	do
	{
		//printf("\nIngrese un numero");
		//scanf("%d",&numero);
		utn_getNumero(&numero,100,0,3,"Numero:","error");
		calculoMaxYMin(&flag,numero,&Max,&Min);
		printf("\nDesea continuar? s/n");
		__fpurge(stdin);
		scanf("%c",&respuesta);

	} while(respuesta != 'n');

	printf("El Maximo es %d ",Max);
	printf("El Minimo es %d ",Min);


}

int calculoMaxYMin(int* pFlag,int numeroFun,
				   int* pMax,int* pMin)
{
	int max = *pMax;
	int min = *pMin;
	int flag = *pFlag;


	//pregunto si es la primera vez que entro
	if(flag==0)
	{
		max = numeroFun;
		min = numeroFun;
		*pFlag=1; // paso el flag externo a 1
	}


	if(numeroFun > max)
	{
		max = numeroFun;
	}
	*pMax = max;


	if(numeroFun < min)
	{
		min = numeroFun;
	}
	*pMin = min;


	return 0;
}


/*
int main()
{
	int edad;
	int dni;
	//int ok;

	//ok = getNumero(&edad,120,1,5,MSG_EDAD,MSG_ERR);
	//if(ok==0)
	if(getNumero(&edad,120,1,5,MSG_EDAD,MSG_ERR)==0)
	{
		printf("edad correcta, sos joven eh");

		getNumero(&dni,50000000,4000000,5,MSG_DNI,MSG_ERR);
	}


}
*/


















