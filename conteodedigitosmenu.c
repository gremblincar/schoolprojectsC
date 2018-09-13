#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define p printf
#define s scanf
#define f fflush
/*NP: Jose Carlos Vazquez Aquino
NP: menu for while do while conteo digitos
Fecha: 13\09\2018
Desc: */
main ()
{
	system("color f0");
	int i;
	float n;
    char op;
	char x;
    
	do
	{

		p("Ingrese su numero para mostrar el conteo de sus digitos: ");
		f(stdin);s("%i",&n);
		p("\n1-For\n\n2-While\n\n3.DoWhile\n");
		p("\nTeclea el numero del programa que deseas ejecutar: ");
		f(stdin);s("%c",&x);
		switch (x)
		{
			case '1':
		for(i=0;n!=0;i++)
		{
			n=n/10;

		}
		p("\nDigitos que tiene tu numero: %i",i);
	    		break;
	    	case '2':
		i=0;
		while(n!=0)
		{
			n=n/10;
			i++;
		}
		p("\nDigitos que tiene tu numero: %i",i);
	    		break;
	    	case '3':
		i=0;
		do
		{
			n=n/10;
			i++;
		}
		while(n!=0);
		p("\nDigitos que tiene tu numero: %i",i);
	    break;
	    	
	    	default: p("Opcion erronea");
		}
	
		
		
		p("\nDesea Repetir el programa S=s N=n: ");
		f(stdin);s("%c",&op);
	 } 
	 while (op=='s'||op=='S');

	return(0);
}
