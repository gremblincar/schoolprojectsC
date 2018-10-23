#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define f fflush
#define p printf
#define s scanf
#define tam 4
main ()
{
	system("color f0");
	int array[tam][tam],i,j;
	for (i=0;i<tam;i++)
	{
		for(j=0;j<tam;j++)
			{
				if(i==0&&j==0)
					array[i][j]='A';
				else if (i==1&&j==1)
					array[i][j]='M';
				else if (i==2&&j==2)
					array[i][j]='O';
				else if (i==3&&j==3)
					array[i][j]='R';
				else
					array[i][j]='X';
			}
	}
	for (i=0;i<tam;i++)
	{
		p("\n");
		for(j=0;j<tam;j++)
			p(" %c ",array[i][j]);
	}
	return(0);
}
