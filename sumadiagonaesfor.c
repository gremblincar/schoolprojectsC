#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define f fflush
#define p printf
#define s scanf
#define tam 3
main ()
{
	system("color f0");
	int array[tam][tam],i,j,suma1=0,suma2=0,suma3=0;
	for (i=0;i<tam;i++)
	{
		for(j=0;j<tam;j++)
			{
				array[i][j]=rand()%10;
			}
	}
	for (i=0;i<tam;i++)
	{
		p("\n");
		for(j=0;j<tam;j++)
			{
			p(" %i ",array[i][j]);
			if(i==j)
				suma1=suma1+array[i][j];
			if(i+j==tam-1)
				suma2=suma2+array[i][j];
			if(i!=j&&i+j!=tam-1)
				suma3=suma3+array[i][j];
			}
	}
	p("\nla suma de la diagonal de izquierda a derecha es %i\nla suma de la diagonal de derecha izquierda es %i\nla suma de los restantes es %i",suma1,suma2,suma3);
	return(0);
}
