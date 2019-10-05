#ifndef ARRAYEMPLOYEES_H_INCLUDED
#define ARRAYEMPLOYEES_H_INCLUDED

typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;
} sEmployee;

/** \brief Para indicar que todas las posiciones en la matriz est�n vac�as,
 * esta funci�n pone la bandera (isEmpty) en TRUE en todos
 * posici�n de la matriz
 * \param list sEmployee * Puntero a la matriz de sEmployees
 * \param len int Array length
 * \return int Return (0) si est� bien
 * *
 */
int initEmployees(sEmployee list[], int len);

/** \brief agregue en una lista existente de empleados los valores recibidos como par�metros
 * en la primera posici�n vac�a
 * \param list sEmployee *
 * \param len int
 * \param id int
 * \nombre del par�metro [5000] char
 * \param lastName [] char
 * \param sueldo flotante
 * \param sector int
 * \return int Devuelve (-1) si Error [sin espacio libre] - (0) si est� bien
 */
int addEmployee(sEmployee list[], int len, int id, char name[],char lastName[],float salary,int sector);


/**\brief imprime el contenido de la matriz sEmployees
 * *
 * \param list sEmployee *
 * \param length int
 * \return int Return (0) si est� bien
 * *
 */
int printEmployee(sEmployee list[], int length, int id);

/** \brief print one sEmployee by id
 * *
 * \param list sEmployee *
  * \param length int
 * \param id int
 * \return int Return (0) si est� bien
 * *
 */
int printEmployees(sEmployee list[], int length);

/** \ brief find a sEmployee by Id en devuelve la posici�n del �ndice en la matriz.
 * *
 * \ param list sEmployee *
 * \ param len int
 * \ param id int
 * \ return Devuelve la posici�n del �ndice del empleado o (-1) si [no se encuentra al empleado]
 */
int findEmployeeById(sEmployee list[], int len,int id);



/** \ brief Eliminar un empleado por Id (poner isEmpty Flag en 1)
 * *
 * \ param list sEmployee *
 * \ param len int
 * \ param id int
 * \ return int Devuelve (-1) si Error [si no puede encontrar un empleado] - (0) si est� bien
 * *
 */
int removeEmployee(sEmployee list[], int len, int id);

/** \ brief modifica una lista existente de sEmployees los valores recibidos como par�metros en la primera posici�n vac�a
 * \ param list sEmployee *
 * \ param len int
 * \ param id int
 * \ nombre del par�metro [] char
 * \ param lastName [] char
 * \ param sueldo flotante
 * \ param sector int
 * \ return int Devuelve (-1) si Error [si no puede encontrar un empleado] - (0) si est� bien
 */
int modificarEmpleado(sEmployee list[], int len, int id, char name[],char lastName[],float salary,int sector, int option);


/** \ brief Matriz de prueba con valores codificados
 * *
 * \ param list [] sEmployee
 * \ param len int
 * \ return int
 * *
 */
int hardCode(sEmployee list[], int len);

/** \ brief Ordena los elementos en la matriz de sEmployees, el orden de los argumentos
indicar orden ARRIBA o ABAJO
 * *
 * \ param list sEmployee *
 * \ param len int
 * \ param order int [1] indica UP - [0] indica DOWN
 * \ return int Return (-1) if Error [Longitud inv�lida o puntero NULL] - (0) si Ok
 * *
 */
int sortEmployees(sEmployee list[], int len, int order);




/** \ brief Busca el primer �ndice vac�o en la matriz de empleados
 * *
 * \ param list [] sEmployee
 * \ param len int
 * \ return int Devuelve el primer ID disponible
 * *
 */
int generarId(sEmployee list[], int len);


/** \brief Muestra salarios
 *
 * \param list [] sEmployee
 * \param len int
 * \return int Devuelve la suma de salarios
 *
 */
float showSalary(sEmployee list[], int len);


/** \brief N�mero de b�squeda de empleados
 *
 * \param list [] sEmployee
 * \param len int
 * \return int return n�mero de empleados
 *
 */
int empleadoOcupado(sEmployee list[], int len);


/**\brief Encuentra el n�mero de empleados que exceden el salario promedio.
 *
 * \param list [] sEmployee
 * \param len int
 * \return int empleados de retorno que exceden el promedio
 *
 */
int buscarSalarioMasAlto(sEmployee list[], int len);
#endif // ARRAYEMPLOYEES_H_INCLUDED
