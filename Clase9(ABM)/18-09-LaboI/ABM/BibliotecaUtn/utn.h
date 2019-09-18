
/** \brief La funcion se encarga de validar el numero ingresado, este numero es tomado como un caracter,
 *         se valida y convierte a tipo de dato entero.
 *
 * \param char* string
 * \param int cant es la cantidad de elementos que posee el string
 * \return int si retorna 1 hubo un error. si retorno 0 (cero) todo bien.
 *
 */
int valNumber(char* string,int);
/** \brief La funcion se encarga de validar el caracter ingresado,
 *         se valida y se devolvera si hubo o no hubo error.
 *
 * \param char* string
 * \param int cant es la cantidad de elementos que posee el string
 * \return int retorna 1 todo mal, 0 todo bien
 *
 */
int valCharacter(char* string,int cant);
int getInt(int* input,char message[],char eMessage[],int lowLimit,int highLimit,int reintentos);
int getFloat(float* input,char message[],char eMessage[],float lowLimit,float highLimit);
int getCharacter(char* input,char message[],char eMessage[],char lowChar,char highChar);
int getString(char* input,char message[],char eMessage[],int lowLimit,int highLimit,int reintentos);
int getSex(char* input,char message[],char eMessage[],int intentos);
