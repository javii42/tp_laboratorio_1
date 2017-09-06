#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"
/*
*\title Calculadora con menu de opciones
*\author Cristian Javier Mollar 1°B
*
*/
int main()
{
    char seguir='s';
    int opcion=0;
    int numA = 0; // Primer operando
    int numB = 0; // Segundo operando
    while(seguir=='s')
    {
        opcion = mostrarMenu(numA, numB);

        switch(opcion)
        {
            case 1:
                system("cls");
                numA = pedirNumeroEntero("Ingrese el primer operando: ");
                break;
            case 2:
                system("cls");
                numB = pedirNumeroEntero("Ingrese el segundo operando: ");
                break;
            case 3:
                system("cls");
                sumar(numA,numB);
                system("pause");
                break;
            case 4:
                system("cls");
                restar(numA,numB);
                system("pause");
                break;
            case 5:
                system("cls");
                dividir(numA,numB);
                system("pause");
                break;
            case 6:
                system("cls");
                multiplicar(numA,numB);
                system("pause");
                break;
            case 7:
                system("cls");
                factorial(numA);
                system("pause");
                break;
            case 8:
                system("cls");
                sumar(numA,numB);
                restar(numA,numB);
                dividir(numA,numB);
                multiplicar(numA,numB);
                factorial(numA);
                system("pause");
                break;
            case 9:
                seguir = 'n';
                break;
        }
        system("cls");
    }
    return 0;
}
