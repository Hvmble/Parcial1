
/*
Programa: Identificar la cantidad de vocales de un nombre 
y mostrar cual tiene mas caracteres y cual tiene menos caracteres
Fecha:11/09/2018
Creador: Mauricio Montoya Abadia
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
char CantCaracter(char nom[100])
{
	int cantidad;
	cantidad = strlen(nom);
	printf("El nombre tiene %d vocales\n", cantidad);
	return cantidad;
}
int main()
{
	char nombre[100];
	printf("Ingrese un nombre \n");
	gets(nombre);
	CantCaracter(nombre);
	getch();
	return 0;
}
