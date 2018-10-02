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
	int i,j,ne,matrix[x][x];
	p("Cuantas filas y columnas quieres?: ");
	s("%i",&ne);
	i=0;
	while(i<ne)
	{
		j=0;
		while(j<ne)
		{
			p("Teclea el elemento de la matriz %i %i: ", i,j);
			s("%i",&matrix[i][j]);
			j++;
		}
		i++;
	}
	i=0;
	while(i<ne)
	{
		p("\n");
		j=0;
		while(j<ne)
		{
		p(" %i ",matrix[i][j]);
		j++;
		}
		i++;
	}
	return(0);
}
