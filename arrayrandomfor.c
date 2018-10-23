#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define f fflush
#define p printf
#define s scanf
#define tam 100
main ()
{
	system("color f0");
	int array[tam],i,num,n,exist,sumaprim,sumapar,sumaimpar;
	float prom;
	srand(time(NULL));
	sumaprim=0;
	sumapar=0;
	sumaimpar=0;
	prom=0;
	for(i=0;i<tam;i++)
	{
		array[i]=rand()%10;
		prom=prom+array[i];
	}
	p("Dime el numero que piensas que esta en la lista del 1 al 10: ");
	s("%i",&num);
	n=0;
	exist=0;
	for(i=0;i<tam;i++)
	{
		if (array[i]==num)
		{
			exist=1;
			n++;
		}
	}
	if(exist==1)
		p("\nEl numero %i si existe",num);
	else
		p("\nEl numero %i no existe",num);
	p("\nTu numero existio %i veces",n);
	p("\nEl promedio de los numeros aleatorios generados es %.1f",prom/100);
	
	
	
	return(0);
}
