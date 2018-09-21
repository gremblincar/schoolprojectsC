#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define f fflush
#define p printf
#define s scanf
/*NP: Jose Carlos Vazquez Aquino
NP: factorial
Fecha: 11\09\2018
Desc: */
main ()
{
	system("color f0");
	int i,j,k,n;
	p("ingrese el valor limite: ");
	f(stdin);s("%i",&n);
	for(i=1;i<=n;i++)
	{
		for(k=n;k>=i;k--)
		{
			p(" ");
		}
		for(j=1;j<=i;j++)
		{
			p(" %i",j);
		}
		p("\n");
	}

	
	
	return(0);
}
