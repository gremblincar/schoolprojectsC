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
	int i,ng;
    char op;
	char x;
    const float impuesto=.16;
    char puesto[50];
    char nombre[50];
    char dep[50];
    float horas,imp2, cosxh, base,total;
	do
	{

		p("Numero de empleados a calcular nomina: ");
		f(stdin);s("%i",&n);
		p("\n1-For\n\n2-While\n\n3.DoWhile\n");
		p("\nTeclea el numero del programa que deseas ejecutar: ");
		f(stdin);s("%c",&x);
		switch (x)
		{
			case '1':
		for(i= 1;i<=n;i++)
		{
		p("Nombre: ");
	    f(stdin);s("%s",&nombre);
	    p("Puesto: ");
	    f(stdin);s("%s",&puesto);
	    p("Horas trabajadas: ");
	    f(stdin);s("%f",&horas);
	    p("Costo por hora: ");
	    f(stdin);s("%f",&cosxh);
	    p("Departamento: ");
	    f(stdin);s("%s",&dep);
	    base=horas*cosxh;
	    imp2=base*impuesto;
	    total=base-imp2;
	    p("\n\nEmpresa: Intel \nNombre de Trabajador: %s \nPuesto: %s \nDepartamento: %s \nHoras Trabajadas: %.2f \nCosto por hora: $ %.2f \nSueldo base: $ %.2f \nImpuestos: $ %.2f \nTotal a pagar: $ %.2f\n\n", nombre, puesto, dep, horas, cosxh, base, imp2, total);
	    
		}
	    		break;
	    	case '2':
		i= 1;
		while(i<=n)
		{
		p("Nombre: ");
	    f(stdin);s("%s",&nombre);
	    p("Puesto: ");
	    f(stdin);s("%s",&puesto);
	    p("Horas trabajadas: ");
	    f(stdin);s("%f",&horas);
	    p("Costo por hora: ");
	    f(stdin);s("%f",&cosxh);
	    p("Departamento: ");
	    f(stdin);s("%s",&dep);
	    base=horas*cosxh;
	    imp2=base*impuesto;
	    total=base-imp2;
	    p("\n\nEmpresa: Intel \nNombre de Trabajador: %s \nPuesto: %s \nDepartamento: %s \nHoras Trabajadas: %.2f \nCosto por hora: $ %.2f \nSueldo base: $ %.2f \nImpuestos: $ %.2f \nTotal a pagar: $ %.2f\n\n", nombre, puesto, dep, horas, cosxh, base, imp2, total);
	    i++;
		}
	    		break;
	    	case '3':
		i= 1;
		do
		{
		p("Nombre: ");
	    f(stdin);s("%s",&nombre);
	    p("Puesto: ");
	    f(stdin);s("%s",&puesto);
	    p("Horas trabajadas: ");
	    f(stdin);s("%f",&horas);
	    p("Costo por hora: ");
	    f(stdin);s("%f",&cosxh);
	    p("Departamento: ");
	    f(stdin);s("%s",&dep);
	    base=horas*cosxh;
	    imp2=base*impuesto;
	    total=base-imp2;
	    p("\n\nEmpresa: Intel \nNombre de Trabajador: %s \nPuesto: %s \nDepartamento: %s \nHoras Trabajadas: %.2f \nCosto por hora: $ %.2f \nSueldo base: $ %.2f \nImpuestos: $ %.2f \nTotal a pagar: $ %.2f\n\n", nombre, puesto, dep, horas, cosxh, base, imp2, total);
	    i++;
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
