#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define p printf
#define s scanf
void potencia();
void raiz();
void suma();
void resta();
void division();
void residuo()
{
	int a,b;
	p("Teclea 2 numeros a cualcular su residuo");
	s("%i%i",&a,&b);
	p("Residuo de %i %%i %i = %i\n",a,b,a%b);
}
void multiplicacion()
{
	int a,b;
	p("Teclea 2 Numeros Enteros: ");
	s("%i%i",&a,&b);
	p("La multiplicacion de %i x %i = %i\n",a,b,a*b);
}
main()
{
	int op,opc;
	do
	{
		p("1-suma 2-resta 3-multiplicacion 4-division 5-residuo 6-potencia 7-raiz: ");
		s("%i",&op);
		switch(op)
		{
			case 1: suma();break;
			case 2: resta();break;
			case 3: multiplicacion();break;
			case 4: division();break;
			case 5: residuo();break;
			case 6: potencia();break;
			case 7: raiz();break;
			default:p("No existe esa opcion\n");
		}
		p("\n\nDeseas volver a elegir otra opcion(1=si)?: ");
		s("%i",&opc);
	}
	while(opc==1);
}
void raiz()
{
	int x;
	p("cual es tu numero a sacar raiz cuadrada?: ");
	s("%i",&x);
	p("la raiz cuadrada de %i es %i\n",x,sqrt(x));
}
void potencia()
{
	int x,y;
	p("Teclea 2 numeros enteros: ");
	s("%i%i",&x,&y);
	p("la potencia de %i a la %i es %i\n",x,y,pow(x,y));
}
void suma()
{
	int x,y;
	p("Teclea 2 numeros enteros a sumar: ");
	s("%i%i",&x,&y);
	p("la suma de %i + %i es %i\n",x,y,x+y);
}
void resta()
{
	int x,y;
	p("Teclea 2 numeros enteros a restar: ");
	s("%i%i",&x,&y);
	p("la resta de %i - %i es %i\n",x,y,x-y);
}
void division()
{
	float x,y;
	p("Teclea 2 numeros enteros a dividir: ");
	s("%f%f",&x,&y);
	p("la division de %.1f / %.1f es %.2f\n",x,y,x/y);
}


