#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define p printf
#define s scanf
#define f fflush
/*NP: Jose Carlos Vazquez Aquino
NP: menu for while do while suma de cuadrados y cubos
Fecha: 12\09\2018
Desc: */
main ()
{
	system("color f0");
	int n,i,a,b,res1,res2;
    char op;
	char x;
	do
	{
		p("Hasta que numero deseas la suma y la serie?: ");
		s("%i",&n);
		a=0;
		b=0;
		p("\n1-For\n\n2-While\n\n3.DoWhile\n");
		p("\nTeclea el numero del programa que deseas ejecutar: ");
		f(stdin);s("%c",&x);
		switch (x)
		{
			case '1':
		for(i=0;i<=n;i++)
		{
			res1=pow(i,2);
			res2=pow(i,3);
			p("\n%i al Cuadrado: %i",i,res1);
			p("\n%i al Cubo %i\n",i,res2);
			if(res1>50)
			{
				a=a+res1;
			}
			if(res2>100)
			{
				b=b+res2;
			}
		}
		p("\nLa suma de los cuadrados es: %i",a);
		p("\nLa suma de los cubos es: %i",b);
	    		break;
	    	case '2':
		i=0;
		while(i<=n)
		{
			res1=pow(i,2);
			res2=pow(i,3);
			p("\n%i al Cuadrado: %i",i,res1);
			p("\n%i al Cubo %i\n",i,res2);
			if(res1>50)
			{
				a=a+res1;
			}
			if(res2>100)
			{
				b=b+res2;
			}
			i++;
		}
		p("\nLa suma de los cuadrados es: %i",a);
		p("\nLa suma de los cubos es: %i",b);

	    		break;
	    	case '3':
			i=0;
		do
		{
			res1=pow(i,2);
			res2=pow(i,3);
			p("\n%i al Cuadrado: %i",i,res1);
			p("\n%i al Cubo %i\n",i,res2);
			if(res1>50)
			{
				a=a+res1;
			}
			if(res2>100)
			{
				b=b+res2;
			}
			i++;
		}
		while(i<=n);
		p("\nLa suma de los cuadrados es: %i",a);
		p("\nLa suma de los cubos es: %i",b);
	    		break;
	    	
	    	default: p("Opcion erronea");
		}
	
		
		
		p("\nDesea Repetir el programa S=s N=n: ");
		f(stdin);s("%c",&op);
	 } 
	 while (op=='s'||op=='S');

	return(0);
}
