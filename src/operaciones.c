#include <stdio.h>
#include "operaciones.h"
void clear()
{
	printf("\n\n\n\n\n\n\n\n\n\n");
}
int ingresarNumero()
{
    int num;
    printf("Ingrese un numero:");
    scanf("%d",&num);
    return num;
}
int suma(int num1,int num2)
{
    int resultado = num1 + num2;
    return resultado;
}
int resta(int num1,int num2)
{
    int resultado = num1 - num2;
    return resultado;
}
int multiplicar(int num1,int num2)
{
    int resultado = num1 * num2;
    return resultado;
}
float division(int num1,int num2)
{
    float resultado;
    resultado =  num1/(float)num2 ;
    return resultado;
}
int calcularFactorial(int numeroACalcular)
{
	int factorial = 1;
	if (numeroACalcular != 0)
	{
		factorial = numeroACalcular * calcularFactorial(numeroACalcular-1);
	}
	return factorial;
}
void mostrarAyB(int flag,int flag2,int A,int B)
{
	if(flag)
	{
		printf("\nA = %d",A);
	}
	else
	{
		printf("\nA = X");
	}
	if(flag2)
	{
		printf("\nB = %d",B);
	}
	else
	{
		printf("\nB = Y");
	}
	printf("\n");
}
