/*
 * utn.c
 *
 *  Created on: 29 ago. 2019
 *      Author: profesor
 */
#include <stdio.h>
#include "utn.h"


static int calcularPromedio(int a, int b)
{

}


int utn_getNumero(int* pNumero,int rangoMax,int rangoMin,
		  int reintentos,char* pMsg,char* pMsgErr)
{	int numero,i;
	int ret=-1; // cargo con error por default
	for(i=0;i<reintentos;i++)
{		// pedido
		printf("%s",pMsg);
		scanf("%d",&numero);
		// validacion
		if(numero>=rangoMin && numero<=rangoMax)
		{
			// el numero esta' bien
			*pNumero = numero;
			//return 0;
			ret=0;
			break;
		}
		else
			printf("%s",pMsgErr);
	}

	return ret;
}


