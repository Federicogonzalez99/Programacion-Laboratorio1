#include <stdio.h>
#include <stdlib.h>
#include "Cliente.h"
#include "utn.h"
#define TAM_CLIENTE 5
int main()
{
    int opcion;
    int contadorCliente=0;
    eCliente arrayCliente[TAM_CLIENTE];
    cliente_inicializar(arrayCliente, TAM_CLIENTE);

    do
    {
        utn_PedirEntero("\n1.Alta Cliente\n2.Mod. Datos Cliente\n3.Baja Cliente\n4.Publicar\n5.Pausar Publicacion\n6.Reanudar Publicacion\n7.Imprimir Clientes\n8.Imprimir publicaciones\n9.Informar clientes\n10.Informar publicaciones\n","Error",1,sizeof(int),1,11,3,&opcion);
        switch(opcion)
        {
        case 1:
            cliente_alta(arrayCliente, TAM_CLIENTE,&contadorCliente);
            break;
        case 2:
            break;
        default:
            printf("Opcion no valida");
        }
    }while(opcion!=11);



return 0;
}
