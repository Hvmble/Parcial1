#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* 
* Programa: ejericicio 5
* Fecha: 11 de septiembre 2018
* Elaborador: Mauricio Montoya Abadia
*/
int calculo (float a){
	float resultado;
	resultado = pow(2,a);
	printf ("cuadrado %f\n",resultado); 
}
int main() {
	float numero;
	printf ("Ingrese un numero  \n"); 
	scanf ("%f", &numero);
	calculo(numero);
	return 0;
}

