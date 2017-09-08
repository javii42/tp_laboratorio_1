#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"


int mostrarMenu(float numA, float numB)
{
    int opcion = 0;
    system("color 1F");
    printf("\t-----------------------------------------\n");
    printf("\t| 1- Ingresar 1er operando (A=%.2f)\t|\n", numA);
    printf("\t| 2- Ingresar 2do operando (B=%.2f)\t|\n", numB);
    printf("\t| 3- Calcular la suma (A+B)\t\t|\n");
    printf("\t| 4- Calcular la resta (A-B)\t\t|\n");
    printf("\t| 5- Calcular la division (A/B)\t\t|\n");
    printf("\t| 6- Calcular la multiplicacion (A*B)\t|\n");
    printf("\t| 7- Calcular el factorial (A!)\t\t|\n");
    printf("\t| 8- Calcular todas las operacione\t|\n");
    printf("\t| 9- Salir\t\t\t\t|\n");
    printf("\t-----------------------------------------\n\n");
    printf("\tOPCION DEL USUARIO: ");
    scanf("%d",&opcion);
    return opcion;
}

void sumar(float numA, float numB)
{
    float resultado = 0;
    resultado = numA + numB;
    system("color 1C");
    printf(" -----------------------------------------------\n");
    printf("|\t\t\t\t\t\t|\n");
    printf("|   %.2f + %.2f = %.2f\t\t\t\t|\n", numA, numB, resultado);
    printf("|\t\t\t\t\t\t|\n");
    printf(" -----------------------------------------------\n");
}

void restar(float numA, float numB)
{
    float resultado = 0;
    resultado = numA - numB;
    system("color 1C");
    printf(" -----------------------------------------------\n");
    printf("|\t\t\t\t\t\t|\n");
    printf("|   %.2f - %.2f = %.2f\t\t\t\t|\n", numA, numB, resultado);
    printf("|\t\t\t\t\t\t|\n");
    printf(" -----------------------------------------------\n");
}

void dividir(float numA, float numB)
{
    float resultado = 0;
    int verificado = 0;
    verificado = verificar(numB);
    system("color 1C");
    if(verificado == 0)
    {
        system("color 1C");
        printf(" ------------------------------------------------\n");
        printf("|\t\t\t\t\t\t|\n");
        printf("| No es posible calcular dividir por cero.\t|\n");
        printf("|\t\t\t\t\t\t|\n");
        printf(" ------------------------------------------------\n");
    }
    else
    {
        resultado =  numA / numB;
        printf(" -----------------------------------------------\n");
        printf("|\t\t\t\t\t\t|\n");
        printf("|  %.2f / %.2f = %.2f\t\t\t\t|\n", numA, numB, resultado);
        printf("|\t\t\t\t\t\t|\n");
        printf(" -----------------------------------------------\n");
    }
}

void multiplicar(float numA, float numB)
{
    float resultado = 0;
    resultado = numA * numB;
    system("color 1C");
    printf(" -----------------------------------------------\n");
    printf("|\t\t\t\t\t\t|\n");
    printf("|   %.2f x %.2f = %.2f\t\t\t\t|\n", numA, numB, resultado);
    printf("|\t\t\t\t\t\t|\n");
    printf(" -----------------------------------------------\n");
}

void factorial(float num)
{
    long long int factorial = 1;
    int i;
    int verificado=0;
    system("color 1C");
    verificado = verificar(num);
    if(verificado == 0)
    {
        system("color 1C");
        printf(" ---------------\n");
        printf("|\t\t|\n");
        printf("|    0! = 1\t|\n");
        printf("|\t\t|\n");
        printf(" ---------------\n");
    }
    else
    {
        if(verificado == 2)
        {
            system("color 1C");
            printf(" ---------------------------------------------------------------\n");
            printf("|\t\t\t\t\t\t\t\t|\n");
            printf("| No es posible calcular el factorial de un número negativo.\t|\n");
            printf("|\t\t\t\t\t\t\t\t|\n");
            printf(" ---------------------------------------------------------------\n");
        }
        else
        {
            for(i = (int)num; i > 1; i--)
            {
                factorial = factorial * i;
            }
            system("color 1C");
            printf(" -----------------------------------------------\n");
            printf("|\t\t\t\t\t\t|\n");
            printf("|    %d! = %lli\t\t\t\t|\n", (int)num, factorial);
            printf("|\t\t\t\t\t\t|\n");
            printf(" -----------------------------------------------\n");
        }
    }
}

int verificar(float num)
{
    int verificado = 0;
    if(num > 0)
    {
        verificado = 1;
    }
    else
    {
        if(num < 0)
        {
            verificado = 2;
        }
    }
    return verificado;
}

float pedirNumeroEntero(char texto[])
{
    float operando = 0;
    int isNumeric;
    int flag;
    do
    {
        if(flag == 1)
        {
            printf("Dato invalido, %s \n", texto);
        }
        else
        {
            printf("%s \n", texto);
            flag = 1;
        }
        fflush( stdin );
        isNumeric = scanf("%f",&operando);
        system("cls");
    }
    while(isNumeric!=1);
    return operando;
}
