#include <stdio.h>

int main ()
{
	int uc=19,columna,numf;
	char uf='J',fila;
	
	
	printf("¡Bienvenido a \"Hundir la flota\"!\n\n");
	printf("- Las medidas del tablero son: %d columnas x 10 filas.\n",uc+1);
	printf("- La columna se indica con un numero (0, 1, 2, ..., %d)\n",uc);
	printf("- La fila se indica con una letra mayuscula (A, B, C, ..., %c)\n",uf);

	do
	{
	printf("\nIntroduce una coordenada (ej. B12) :\n");
	scanf("%c%d",&fila, &columna);
	if((fila>='a')&&(fila<='z'))
		fila=fila-32;

	return 0;
}