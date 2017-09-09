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
    mostrarResultado('+',numA,numB,resultado);
}

void restar(float numA, float numB)
{
    float resultado = 0;
    resultado = numA - numB;
    mostrarResultado('-',numA,numB,resultado);
    system("color 1C");
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
        printf(" --------------------------------------------------------------------------\n");
        printf("|\n");
        printf("| \tNo es posible calcular dividir por cero.\n");
        printf("|\n");
        printf(" --------------------------------------------------------------------------\n");
    }
    else
    {
        resultado =  numA / numB;
        mostrarResultado('/',numA,numB,resultado);
    }
}

void multiplicar(float numA, float numB)
{
    float resultado = 0;
    resultado = numA * numB;
    mostrarResultado('x',numA,numB,resultado);
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
        printf(" --------------------------------------------------------------------------\n");
        printf("|\n");
        printf("| \t0! = 1\n");
        printf("|\n");
        printf(" --------------------------------------------------------------------------\n");
    }
    else
    {
        if(verificado == 2)
        {
            system("color 1C");
            printf(" --------------------------------------------------------------------------\n");
            printf("|\n");
            printf("| \tNo es posible calcular el factorial de un número negativo.\n");
            printf("|\n");
            printf(" --------------------------------------------------------------------------\n");
        }
        else
        {
            for(i = (int)num; i > 1; i--)
            {
                factorial = factorial * i;
            }
            mostrarResultado('!',num,0,(float)factorial);
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

void mostrarResultado(char operacion, float numA, float numB, float resultado){
    system("color 1C");
    printf(" --------------------------------------------------------------------------\n");
    printf("|\n");
    if(operacion != '!')
    {
        printf("| \t%.2f %c %.2f = %.2f \n", numA,operacion, numB, resultado);
    }else
    {
        printf("| \t%d! = %d \n", (int)numA, (int)resultado);
    }
    printf("|\n");
    printf(" --------------------------------------------------------------------------\n");

}
