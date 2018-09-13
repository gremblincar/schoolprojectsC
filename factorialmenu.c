#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define p printf
#define s scanf
#define f fflush
/*NP: Jose Carlos Vazquez Aquino
NP: menu for while do while factorial
Fecha: 11\09\2018
Desc: */
main ()
{
	system("color f0");
	int a,i;
	double fact;
    char op;
	char x;
    
	do
	{

		fact=1;
		p("Dame tu numero: ");
		f(stdin);s("%i",&a);
		p("\n1-For\n\n2-While\n\n3.DoWhile\n");
		p("\nTeclea el numero del programa que deseas ejecutar: ");
		f(stdin);s("%c",&x);
		switch (x)
		{
			case '1':
		for(i= 1; i<=a;i++)
		{
		fact=fact*i;
		}
		p("El factorial de tu nummero es %.2f",fact);
	
	    		break;
	    	case '2':
	    i=1;
		while(i<=a)
		{
		fact=fact*i;
		i++;
		}
		p("El factorial de tu nummero es %.2f",fact);
	    		break;
	    	case '3':
	    i=1;
		do
		{
		fact=fact*i;
		i++;
		}
		while(i<=a);
		p("El factorial de tu nummero es %.2f",fact);
	    break;
	    	
	    	default: p("Opcion erronea");
		}
	
		
		
		p("\nDesea Repetir el programa S=s N=n: ");
		f(stdin);s("%c",&op);
	 } 
	 while (op=='s'||op=='S');

	return(0);
}
