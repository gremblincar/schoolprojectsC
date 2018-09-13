#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define p printf
#define s scanf
#define f fflush
/*NP: Jose Carlos Vazquez Aquino
NP: menu for while do while serie 2
Fecha: 06\09\2018
Desc: */
main ()
{
	system("color f0");
	int n,i;
    char op;
	char x;
	int first,second,next,primero,segundo,base_print;


    
	do
	{
		n=0;
		p("Hasta que numero deseas la serie?: ");
		f(stdin);s("%i",&n);
		p("\n1-For\n\n2-While\n\n3.DoWhile\n");
		p("\nTeclea el numero del programa que deseas ejecutar: ");
		f(stdin);s("%c",&x);
		switch (x)
		{
			case '1':
				first=0;
				second=1;
				for(next=1;next<n;i++)
				{
					if (i<= 1)
		      	next= i;
		   		 else
		    	{
		      	next= first + second;
		      	first = second;
		      	second = next;
		   		 }
		   		 
				
						p("\n%i",next);
					
				}

	    		break;
	    	case '2':

primero=0;
 segundo=1;

	   while(base_print<n) 
   {
      if ( n <= 1 )
        {
          base_print = n;
          n++;
        }
      else
       {
         base_print = primero + segundo;
         primero = segundo;
         segundo = base_print;
         n++;
       }
    p("%i\n",base_print);
}

	    		break;
	    	case '3':

primero=0;
 segundo=1;
do
		{
      if ( n <= 1 )
        {
          base_print = n;
          n++;
        }
      else
       {
         base_print = primero + segundo;
         primero = segundo;
         segundo = base_print;
         n++;
       }
    p("%i\n",base_print);
		}
		while(base_print<n);
	    		break;
	    	
	    	default: p("Opcion erronea");
		}
	
		
		
		p("\nDesea Repetir el programa S=s N=n: ");
		f(stdin);s("%c",&op);
	 } 
	 while (op=='s'||op=='S');

	return(0);
}
