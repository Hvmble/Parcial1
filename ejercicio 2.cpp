#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

/* 
* Programa: ejericicio 2
* Fecha: 11 de septiembre 2018
* Elaborador: Mauricio Montoya Abadia
*/
int main(int argc, char *argv[]) {
	int pares[10]; // Declaraci�n de un vector
	int contador = 0; // Declaraci�n de una variable
	int numero; // Declaraci�n de una variable
	
	do// Ciclo for para repetir acciones
	{
		printf ("Ingrese un numero \n"); // se muestra mensaje
		scanf ("%d",&numero); // el dato ingresado se asigna a la variable numero
		
		
		if(numero%2==0) // Verificaci�n si el numero es par
		{
			pares[contador] = numero; //almacena los numeros pares
			contador++; // aumentando en posici�n en el vector
		}
	
	
	for(int i = 0; i < contador; i++) // Ciclo for para repetir acciones
	{
			printf (" Numeros pares: %d  \n",pares[i]); // se muestra mensaje
	}
	}while(numero!=0);
	return 0;
}
	


