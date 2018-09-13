#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define p printf
#define s scanf
#define f fflush
/*NP: Jose Carlos Vazquez Aquino
NP: menu for while do while serie 3
Fecha: 06\09\2018
Desc: */
main ()
{
	system("color f0");
	int n,i;
    char op;
	char x;
	const int c=1;
	do
	{
		p("Hasta que numero deseas la serie?: ");
		s("%i",&n);
		p("\n1-For\n\n2-While\n\n3.DoWhile\n");
		p("\nTeclea el numero del programa que deseas ejecutar: ");
		f(stdin);s("%c",&x);
		switch (x)
		{
			case '1':
				for(i=1;i<=n;i+=1)
				{
					p("\n%i/%i",c,i);
				}

	    		break;
	    	case '2':
				i=1;
				while(i<=n)
				{
					p("\n%i/%i",c,i);
					i=i+1;
				}

	    		break;
	    	case '3':
				i=1;
				do
				{
					p("\n%i/%i",c,i);
					i=i+1;
				}
				while(i<=n);

	    		break;
	    	
	    	default: p("Opcion erronea");
		}
	
		
		
		p("\nDesea Repetir el programa S=s N=n: ");
		f(stdin);s("%c",&op);
	 } 
	 while (op=='s'||op=='S');

	return(0);
}
