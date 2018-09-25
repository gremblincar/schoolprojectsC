#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define f fflush
#define p printf
#define s scanf
/*NP: Jose Carlos Vazquez Aquino
NP: factorial
Fecha: 11\09\2018
Desc: */
main ()
{
	system("color f0");
	int i,nal,cal[25],prom,opc;
	char nombre [25][50];
	p("Cuantos alumnos son: ");
	s("%i",&nal);
	prom=0;
	i=0;
	while(i<nal)
	{
		p("teclea el nombre del alumno %i: ",i+1);
		f(stdin);gets(nombre[i]);
		p("teclea la calificacion de %s: ",nombre[i]);
		s("%i",&cal[i]);
		prom+=cal[i];
		i++;
	}
	prom=prom/nal;
	p("promedio = %i\n",prom);
	p("alumnos x encima del promedio:\n");
	i=0;
	while(i<nal)
	{
		if(cal[i]>prom)
		{
			p("%s con calificacion de %i\n",nombre[i],cal[i]);
		}
	i++;
	}
	return(0);
}
