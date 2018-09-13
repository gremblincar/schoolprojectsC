#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define p printf
#define s scanf
#define f fflush
/*NP: Jose Carlos Vazquez Aquino
NP: menu for while do while tabla
Fecha: 11\09\2018
Desc: */
main ()
{
	system("color f0");
	int num,i;
    char op;
	char x;
    
	do
	{

		p("Dame tu numero: ");
		f(stdin);s("%i",&num);
		p("\n1-For\n\n2-While\n\n3.DoWhile\n");
		p("\nTeclea el numero del programa que deseas ejecutar: ");
		f(stdin);s("%c",&x);
		switch (x)
		{
			case '1':
		for (i=1;i<=10;i++)
		{
			p("\n%i x %i = %i",i,num,i*num);
		}
	    		break;
	    	case '2':
		i=1;
		while (i<=10)
		{
			p("\n%i x %i = %i",i,num,i*num);
			i++;
		}
	    		break;
	    	case '3':
		i=1;
		do
		{
			p("\n%i x %i = %i",i,num,i*num);
			i++;
		}
		while (i<=10);
	    break;
	    	
	    	default: p("Opcion erronea");
		}
	
		
		
		p("\nDesea Repetir el programa S=s N=n: ");
		f(stdin);s("%c",&op);
	 } 
	 while (op=='s'||op=='S');

	return(0);
}
