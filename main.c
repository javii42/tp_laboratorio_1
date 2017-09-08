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
    int flagA, flagB;
    float numA = 0; // Primer operando
    float numB = 0; // Segundo operando
    while(seguir=='s')
    {
        opcion = mostrarMenu(numA, numB);
        if(opcion!=9 && opcion!=1 && opcion!= 2 && flagA!=1 && flagB!=1){
            opcion = 10;
        }
        switch(opcion)
        {
            case 1:
                system("cls");
                flagA = 1;
                numA = pedirNumeroEntero("Ingrese el primer operando: ");
                break;
            case 2:
                system("cls");
                flagB = 1;
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
            default:
                system("cls");
                printf("No se ingreso ningun dato.\n");
                system("pause");
        }
        system("cls");
    }
    return 0;
}
