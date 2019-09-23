
/**
 * \brief Inicializa un array de Personas con el valor recibido
 * \param array Es el array a ser inicializado
 * \param cantidadDeElementos Indica la logitud del array
 * \param valor Es el valor que sera cargado en cada posición
 * \return void
 *
 */
void inicializarArrayPersonas(char [],int tamanio, int valor);
/**
 * \brief Busca la primer ocurrencia de un valor en un array de Personas
 * \param array Es el array en el cual buscar
 * \param cantidadDeElementos Indica la logitud del array
 * \param valor Es el valor que se busca
 * \return Si no hay ocurrencia (-1) y si la hay, la posición de la misma
 *
 */
int buscarLugarLibre(char [], int tamanio, int valor);
/**
 * \brief Pide un número al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */
int pedirInt(char mensaje[]);
/**
 * \brief pide un caracter al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El caracter ingresado por el usuario
 *
 */
char pedirChar(char mensaje[]);
/**
 * \brief Verifica si el valor recibido es numérico
 * \param str Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */
int esNumerico(char str[]);
/**
 * \brief Verifica si el valor recibido contiene solo letras
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo ' ' y letras y 0 si no lo es
 *
 */
int esSoloLetras(char str[]);
/**
 * \brief Pide un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return void
 */
void pedirTexto(char mensaje[],char input[]);
/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo letras
 */
int contieneSoloLetras(char mensaje[],char input[]);
/**
 * \brief Solicita un texto numérico al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo números
 */
int contieneSoloNumeros(char mensaje[],char input[]);
/** \brief Busca el minimo y maximo en un array
 *
 * \param Array por referencia
 * \param Elementos del Array
 * \param minimo a devolver por referencia
 * \param maximo a devolver por referencia
 * \return return 0
 *
 */
int minMaxArrayInt(int* pArray,int limite,int* minimo,int* maximo);
/** \brief Suma los elementos de un array
 *
 * \param Array por referencia
 * \param Elementos del Array
 * \param la suma por referencia
 * \return return 0
 *
 */
int sumaArrayInt(int* pArray,int limite,int* resultado);
/** \brief Promedio de los elementos de un array
 *
 * \param Array por referencia
 * \param Elementos del Array
 * \param el promedio por referencia
 * \return return 0
 *
 */
int promedioArrayInt(int* pArray,int limite,int* resultadoProm);
