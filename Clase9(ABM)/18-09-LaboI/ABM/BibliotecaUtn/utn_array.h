#define MAX_CARACTERES 41
typedef struct
{
    int dia;
    int mes;
    int anio;

}eFechaIngreso;

typedef struct
{

    char nombre[MAX_CARACTERES];
    char apellido[MAX_CARACTERES];
    int legajo;
    eFechaIngreso fecha_de_ingreso;
    char sexo;
    int edad;
    int nota1;
    int nota2;
    float promedio;
    int estado;

}eAlumno;
int sumaVector(int* array,int cantidad);
float promedioVector(eAlumno array[],int cantidad);
/** \brief La funcion inicializa el campo estado del array en 0 para cada elemento, eso indica que
 *         el array de vectores en ese indice se encuentra vacio y que es posible cargar datos
 *
 * \param  eAlumno pArray[] vector de estructuras a trabajar
 * \param int cantidad total de elementos que posee el vector de estructuras
 * \return int retorna un 0 (cero) si cumplio su tarea, devuelve -1 en caso de error.
 *
 */
int inicializarArray(eAlumno pArray[],int cantidad);
/** \brief La funcion recorre el array de estructuras buscando en el campo estado un cero, que indica el espacio libre.
 *
 * \param  eAlumno pArray[] vector de estructuras a trabajar
 * \param  int cantidad total de elementos que posee el vector de estructuras
 * \return int retorna la primera posicion que encuentre en el campo estado.
 *         retorna -1, si no hay espacio libre, si la cantidad es menor a cero o si el pArray es null.
 *
 */
int buscarEspacioLibre(eAlumno pArray[],int cantidad);
/** \brief La funcion solamente muestra los datos de una estructura
 *
 * \param  eAlumno pArray
 * \return no retorna nada al ser void.
 *
 */
void mostrarUnElemento(eAlumno pArray);
/** \brief Muestra todos los elementos guardados en el vector estructura, verifica que sea distinto de nulo y que la
 *         cantidad de elementos sea mayor a 0 (cero).
 * \param  eAlumno pArray[] array de tipo estructura
 * \param  int cantidad elementos que tiene el array de estructura
 * \return int retorna cero. Caso contrario retorna 1;
 *
 */
int mostrarArrayDeElementos(eAlumno pArray[],int cantidad);
/** \brief Se solicita datos al usuario que van a ser guardados en los campos del array de estructura.
 *
 * \param  eAlumno pArray[] array de estructura
 * \param  int cantidad elementos del array de estructura.
 * \return int retorna 0 (cero) si la carga fue exitosa. caso contrario retorna 1.
 *
 */
int cargaArray(eAlumno pArray[],int cantidad);
/** \brief la funcion recibe por parametro el legajo a buscar. se recorre el array para encontrar si existe ese legajo
 *
 * \param eAlumno alumno[] vector de estructura
 * \param int cantidad elementos
 * \param int legajo se pasa por referencia
 * \return int si se encuentra el legajo se retorna 0 (cero). caso contrario se retorna 1.
 *
 */
int buscarLegajo(eAlumno[],int,int);
int vectorMaximo(int* array,int cantidad,int* max);
int vectorMinimo(int* array,int cantidad,int* min);
/** \brief ordenamiento de burbuja eficiente
 *
 * \param  eAlumno pArray[]
 * \param  int cantidad
 * \return int retorna 0 (cero).
 *
 */
int bubbleSort(eAlumno pArray[],int cantidad);
int newAlumno(eAlumno alumno[],int posicion,char nombre[],char apellido[],int legajo,int dia,int mes,int anio,char sexo,int nota1,int nota2,float promedio);
