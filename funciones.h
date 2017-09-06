#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

    /** \brief Muestra el menu principal.
     *  \param int numA, primer operando
     *  \param int numB, segundo operando
     * \return int opcion.
     */
    int mostrarMenu();

    /** \brief Permite sumar dos numeros enteros y mostrar el resultado en pantalla.
     *
     * \param int numA, primer entero para sumar.
     * \param int numB, segundo numero entero para sumar.
     * \return void.
     *
     */
    void sumar(int numA, int numB);

    /** \brief Permite restar dos numeros enteros y mostrar el resultado en pantalla.
     *
     * \param int numA, primer entero para restar.
     * \param int numB, segundo numero entero para restar.
     * \return void.
     *
     */
    void restar(int numA, int numB);

    /** \brief Permite dividir dos numeros enteros, verificar que el dividendo no sea cero y
     *  mostrar el resultado en pantalla.
     * \param int numA, divisor.
     * \param int numB, dividendo.
     * \return void.
     *
     */
    void dividir(int numA, int numB);

    /** \brief Permite multiplicar dos numeros enteros y mostrar el resultado en pantalla.
     *
     * \param int numA, primer entero para multiplicar.
     * \param int numB, segundo numero entero para multiplicar.
     * \return void.
     *
     */
    void multiplicar(int numA, int numB);

    /** \brief Permite calcular el factorial de un numero entero (verifica si es cero o negativo).
     *
     * \param int num, entero para calcular.
     * \return void.
     *
     */
    void factorial(int num);

    /** \brief Permite verificar si el numero es igual o menor a cero.
     *
     * \param  int num, numero que va a ser verificado
     * \return int, si el numero es cero devuelve 0, si es mayor a cero devuelve 1 y si es menor a cero devuelve 2.
     *
     */
     int verificar(int num);

     /** \brief Pide un numero entero con un mensaje personalizado.
      *
      * \param char[] texto, cadena de caracteres para pedir texto.
      * \return int, numero entero ingresado.
      *
      */
      int pedirNumeroEntero (char texto[]);





#endif // FUNCIONES_H_INCLUDED

