#include <stdio.h>

void DibujaTablero();

void DibujaTablero()
{
	int uc=19,printcolumna=0;
	char uf='J',printfila='A';
	printf("    __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __\n   |");
	
	for(;printcolumna<10;)
	{
		printf("%d |",printcolumna);
		printcolumna=++printcolumna;
	}
	for(;(printcolumna<uc+1)&&(printcolumna>9);)
	{
		printf("%d|", printcolumna);
		printcolumna=++printcolumna;
	}
	printf("\n");
	printf(" __|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|\n");
	
	for(;printfila<'K';)
	{
		printf("| %c|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |\n",printfila);
		printf("|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|__|\n");
		printfila=++printfila;
	}
}
void main()
{

	int columna;
	char fila,salir=0;

	printf("¡Bienvenido a \"Hundir la flota\"!\n\n");
	DibujaTablero();

	do
	{
		printf("\nIntroduce una coordenada (ej. B12) :\n");
		scanf("%c%d",&fila, &columna);

		if(fila>'Z')
			fila=fila-32;

		if((fila=='Z')&&(columna==0))
		{
			printf("\nEl juego ha sido interrumpido.\n");
			salir=1;
		}
	
		else
		{
			if((fila<'K')&&(columna<20))
				printf("\nFila %c, Columna %d\n",fila,columna);
			else
				printf("\nError en las coordenadas\n");
		}
	}
	while(salir==0);
}
