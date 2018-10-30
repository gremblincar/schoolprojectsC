#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define p printf
#define s scanf
#define f fflush
void invocarrandom ()
{
	int randomarray,num,exist,i,j;
	srand(time(NULL));
	randomarray=rand()%10;
	j=0;
	while (j<=2)
	{
	p("Dime el numero que piensas que esta en la lista del 1 al 10: ");
	s("%i",&num);
	exist=0;
	if (randomarray==num)
		exist=1;
	if(exist==1)
	{
		p("\nEl numero %i si existe\n",num);
		j=4;
	}
	else
	{
		p("\nEl numero %i no existe, intentalo de nuevo\n",num);
		j++;
	}
	}
}

main()
{
	int opc;
	do
	{
		invocarrandom();
		p("\n\nDeseas volver (1=si)?: ");
		s("%i",&opc);
	}
	while(opc==1);
	return (0);
}

