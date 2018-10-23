#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define f fflush
#define p printf
#define s scanf
#define tam 10
main ()
{
	system("color f0");
	int array[tam][tam],i,j,n,sumadeij=0;
	srand(time(NULL));
	p("Digite el tamaño de la matriz: ");
	s("%i",&n);
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			{
				array[i][j]=rand()%10;
				sumadeij=sumadeij+array[i][j];
			}
	}
	for (i=0;i<n;i++)
	{
		p("\n");
		for(j=0;j<n;j++)
			p(" %i ",array[i][j]);
	}
	p("\nLa suma de todo el array aleatorio es: %i",sumadeij);
		
	return(0);
}
