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
	int i,k,n;
	p("ingrese el valor limite: ");
	f(stdin);s("%i",&n);
	for(i=1;i<=n;i++)
	{
	p("****%i****\n",i);
	for(k=1;k<=10;k++)
	{
		p("%i x %i = %i\n", i,k,i*k);	
	}
	p("\n");	
	
	}

	
	
	return(0);
}
