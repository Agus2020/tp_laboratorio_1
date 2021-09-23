/*
 * operaciones.h
 *
 *  Created on: 19 sep. 2021
 *      Author: Akino
 */

#ifndef OPERACIONES_H_
#define OPERACIONES_H_
/*Clear
 * Su funcion es dejar espacios simulando un system(cls)
 * */
void clear();


/*IngresarNumero
 * Pide el ingreso de un numero
 * */
int ingresarNumero();

/*
 * suma
 * Realiza la suma de los numeros cargados
 * */
int suma (int num1,int num2);

/*
 * resta
 * Realiza la resta de los sumeros cargados
 * */
int resta(int num1,int num2);
/*
 * multiplicar
 * Realiza la multiplicacion de los numeros cargados
 * */
int multiplicar(int num1,int num2);

/*
 * division
 * Realiza la division de los numeros cargados
 * */
float division(int num1,int num2);

/*
 * calcularFactorial
 * Calcula los factoriales de los numeros cargados
 * */

int calcularFactorial(int numeroACalcular);


/*
 * mostrarAyB
 * Muestra los valores de A y B en el menu
 * */
void mostrarAyB(int flag,int flag2,int A,int B);


#endif /* OPERACIONES_H_ */
