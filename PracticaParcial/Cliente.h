typedef struct
{
    char nombre[30];
    char apellido[30];
    int cuit;
    int idCliente;
    int estado;
}eCliente;
int cliente_inicializar(eCliente array[], int tamanio);
int cliente_buscarLugarVacio(eCliente array[], int tamanio, int* posicion);
int cliente_alta(eCliente array[], int tamanio,int* contadorCliente);
