#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

    /** \brief Muestra el menu principal.
     *  \param float numA, primer operando
     *  \param float numB, segundo operando
     * \return int opcion.
     */
    int mostrarMenu(float numA, float numB);

    /** \brief Permite sumar dos numeros enteros y mostrar el resultado en pantalla.
     *
     * \param float numA, primer entero para sumar.
     * \param float numB, segundo numero entero para sumar.
     * \return void.
     *
     */
    void sumar(float numA, float numB);

    /** \brief Permite restar dos numeros enteros y mostrar el resultado en pantalla.
     *
     * \param float numA, primer entero para restar.
     * \param float numB, segundo numero entero para restar.
     * \return void.
     *
     */
    void restar(float numA, float numB);

    /** \brief Permite dividir dos numeros enteros, verificar que el dividendo no sea cero y
     *  mostrar el resultado en pantalla.
     * \param float numA, divisor.
     * \param float numB, dividendo.
     * \return void.
     *
     */
    void dividir(float numA, float numB);

    /** \brief Permite multiplicar dos numeros enteros y mostrar el resultado en pantalla.
     *
     * \param float numA, primer entero para multiplicar.
     * \param float numB, segundo numero entero para multiplicar.
     * \return void.
     *
     */
    void multiplicar(float numA, float numB);

    /** \brief Permite calcular el factorial de un numero entero (verifica si es cero o negativo), .
     *      se pasa como parametro un flotante, pero se castea y se calcula el factorial de la parte entera.
     * \param float num, entero para calcular.
     * \return void.
     *
     */
    void factorial(float num);

    /** \brief Permite verificar si el numero es igual o menor a cero.
     *
     * \param  int num, numero que va a ser verificado
     * \return int, si el numero es cero devuelve 0, si es mayor a cero devuelve 1 y si es menor a cero devuelve 2.
     *
     */
     int verificar(float num);

     /** \brief Pide un numero entero con un mensaje personalizado.
      *
      * \param char[] texto, cadena de caracteres para pedir texto.
      * \return int, numero entero ingresado.
      *
      */
      float pedirNumeroEntero (char texto[]);





#endif // FUNCIONES_H_INCLUDED

