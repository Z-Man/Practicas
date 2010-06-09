#include <stdio.h>

int main ()
{
	int uc=19,columna;
	char uf='J',fila;
	
	
	printf("¡Bienvenido a \"Hundir la flota\"!\n\n");
	printf("- Las medidas del tablero son: %d columnas x 10 filas.\n",uc+1);
	printf("- La columna se indica con un numero (0, 1, 2, ..., %d)\n",uc);
	printf("- La fila se indica con una letra mayuscula (A, B, C, ..., %c)\n",uf);

	printf("\nIntroduce una coordenada (ej. B12) :\n");
	scanf("%c%d",&fila, &columna);
	printf("\n(Fila %c, Columna %d)\n",fila, columna);

	return 0;
}