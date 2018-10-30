#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define p printf
#define s scanf
#define f fflush
void barco ()
{
	int i,k,n,j,l,m,nn,o,pp,s,t;

     for(i=1;i<=4;++i)
     {
     	p("\n"); 
     	p("    ");
        for(j=1;i>=j;j++)
            printf("X");
    }
	for(l=1;l<=2;++l)
     {
     	p("\n"); 
     	p("    ");
		 printf("X");  
    }
	for(pp=1;pp<=4;pp++)
	{
		p("\n");
    	for(o=1;o<=pp;o++)
            p(" ");
		for(nn=pp;nn<=12;nn++)
     	p("X");
	}
	for(s=1;s<=2;s++)
	{
		p("\n");
		for(t=1;t<=8;t++)
			p(" ~ ");
	}
}
void trianguloderecha ()
{
	int i,j,k,n;
	p("ingrese el valor limite: ");
	f(stdin);s("%i",&n);
	i=1;
	do
	{
		j=1;
		do
		{
			p("%i",j);
			j++;
		}
		while(j<=i);
		p("\n");
		i++;
	}
	while(i<=n);
	i=n;
	do
	{
		k=1;
		do
		{
			p("%i",k);
			k++;
		}
		while(k<=i);
		p("\n");
		i--;
	}
	while(i>=1);
}
void triangulocentrado ()
{
	int i,j,k,n;
	p("ingrese el valor limite: ");
	f(stdin);s("%i",&n);
	i=1;
	do
	{
		k=n;
		do
		{
			p(" ");
			k--;
		}
		while(k>=i);
		j=1;
		do
		{
			p(" %i",j);
			j++;
		}
		while(j<=i);
		p("\n");
		i++;
	}
	while(i<=n);
}

main()
{
	int opc,menuopc;
	do
	{
		p("\n Elije la opcion que desees:\n1-Estructuras Anidadas Barco\n2-Estructuras Anidadas Triangulo Derecha\n3-Estructuras Anidadas Triangulo Centrado\n");
		p("Opcion: ");
		s("%i",&menuopc);
		switch (menuopc)
		{
			case 1:
				barco ();
				break;
			case 2:
				trianguloderecha();
				break;
			case 3:
				triangulocentrado();
				break;
		}
		p("\n\nDeseas volver (1=si)?: ");
		s("%i",&opc);
	}
	while(opc==1);
	return (0);
}

