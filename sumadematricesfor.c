#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define f fflush
#define p printf
#define s scanf
#define x 10
/*NP: Jose Carlos Vazquez Aquino
NP: factorial
Fecha: 11\09\2018
Desc: */
main ()
{
	system("color f0");
	int i,j,ne,matrix[x][x],matrix2[x][x];
	p("Cuantas filas y columnas quieres de la matriz?: ");
	s("%i",&ne);
	for(i=0;i<ne;i++)
		for(j=0;j<ne;j++)
		{
			p("Teclea el elemento de la matriz 1 %i %i: ", i,j);
			s("%i",&matrix[i][j]);
		}
	for(i=0;i<ne;i++)
		for(j=0;j<ne;j++)
		{
			p("Teclea el elemento de la matriz 2 %i %i: ", i,j);
			s("%i",&matrix2[i][j]);
		}
	for(i=0;i<ne;i++)
	{
		p("\n");
		for(j=0;j<ne;j++)
		p(" %i ",matrix[i][j]);
	}
	p("\n");
	for(i=0;i<ne;i++)
	{
		p("\n");
		for(j=0;j<ne;j++)
		p(" %i ",matrix2[i][j]);
	}
	p("Suma de las 2: \n");
	for(i=0;i<ne;i++)
	{
		p("\n");
		for(j=0;j<ne;j++)
		p(" %i ",matrix[i][j]+matrix2[i][j]);
	}
	return(0);
}
