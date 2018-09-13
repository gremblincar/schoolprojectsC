#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define p printf
#define s scanf
#define f fflush
/*NP: Jose Carlos Vazquez Aquino
NP: menu for while do while tabla
Fecha: 13\09\2018
Desc: */
main ()
{
	system("color f0");
	int i,n;
	float a;
    char op;
	char x;
    
	do
	{

		p("Dame el numero hasta donde quieres que tenga la serie 1/n y su suma: ");
		f(stdin);s("%i",&n);
		a=0;
		p("\n1-For\n\n2-While\n\n3.DoWhile\n");
		p("\nTeclea el numero del programa que deseas ejecutar: ");
		f(stdin);s("%c",&x);
		switch (x)
		{
			case '1':
		for(i= 1; i<=n;i++)
		{
		p("  1/%i",i);
		a=a+(1/(float)i);
		}
		p("\nLa suma de la serie es: %.2f",a);
	    		break;
	    	case '2':
		i= 1;
		while(i<=n)
		{
		p("  1/%i",i);
		a=a+(1/(float)i);
		i++;
		}
		p("\nLa suma de la serie es: %.2f",a);
	    		break;
	    	case '3':
		i= 1;
		do
		{
		p("  1/%i",i);
		a=a+(1/(float)i);
		i++;
		}
		while(i<=n);
		p("\nLa suma de la serie es: %.2f",a);
	    break;
	    	
	    	default: p("Opcion erronea");
		}
	
		
		
		p("\nDesea Repetir el programa S=s N=n: ");
		f(stdin);s("%c",&op);
	 } 
	 while (op=='s'||op=='S');

	return(0);
}
