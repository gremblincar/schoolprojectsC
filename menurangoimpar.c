#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define p printf
#define s scanf
#define f fflush
/*NP: Jose Carlos Vazquez Aquino
NP: menu for while do while impares en rango
Fecha: 12\09\2018
Desc: */
main ()
{
	system("color f0");
	int n1,n2,i,a;
    char op;
	char x;
	do
	{
		system("cls");
		p("Dame el primer numero para rango de impares: ");
		f(stdin);s("%i",&n1);
		p("\nDame el segundo numero para rango de impares: ");
		f(stdin);s("%i",&n2);
		a=0;
		p("\n1-For\n\n2-While\n\n3.DoWhile\n");
		p("\nTeclea el numero del programa que deseas ejecutar: ");
		f(stdin);s("%c",&x);
		switch (x)
		{
			case '1':
		p("\nImpares:\n");
		for(i=n1;i<=n2;i++)
		{
			if(i%2==0)
			{
				
			}
			else
			{
				p("\n%i\n",i);
				a=a+i;
			}
		}
		p("\n\nLa suma de los impares es: %i\n",a);
	    		break;
	    	case '2':
		p("\nImpares:\n");
		i=n1;
		while(i<=n2)
		{
			if(i%2==0)
			{
				
			}
			else
			{
				p("\n%i\n",i);
				a=a+i;
			}
			i++;
		}
		p("\n\nLa suma de los impares es: %i\n",a);
	    		break;
	    	case '3':
		p("\nImpares:\n");
		i=n1;
		do
		{
			if(i%2==0)
			{
				
			}
			else
			{
				p("\n%i\n",i);
				a=a+i;
			}
			i++;
		}
		while(i<=n2);
		p("\n\nLa suma de los impares es: %i\n",a);
	    		break;
	    	
	    	default: p("Opcion erronea");
		}
	
		
		
		p("\nDesea Repetir el programa S=s N=n: ");
		f(stdin);s("%c",&op);
	 } 
	 while (op=='s'||op=='S');

	return(0);
}
