#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define f fflush
#define p printf
#define tam 32
main ()
{
	system("color f0");
	int aciertos, errores,i;
	char resp[tam][tam];
	char capit[tam][tam]={"Aguascalientes","Mexicali","La Paz","Campeche","Saltillo","Colima","Tuxtla Gutierrez","Chihuahua","Ciudad de Mexico","Durango","Guanajuato","Chilpancingo","Pachuca","Guadalajara","Toluca","Morelia","Cuernavaca","Tepic","Monterrey","Oaxaca","Puebla","Queretaro","Chetumal","San Luis Potosi","Culiacan","Hermosillo","Villahermosa","Ciudad Victoria","Tlaxcala","Xalapa","Merida","Zacatecas"};
	char est[tam][tam]={"Aguascalientes","Baja California","Baja California Sur","Campeche","Coahuila","Colima","Chiapas","Chihuahua","Distrito Federal","Durango","Guanajuato","Guerrero","Hidalgo","Jalisco","Estado de Mexico","Michoacan","Morelos","Nayarit","Nuevo Leon","Oaxaca","Puebla","Queretaro","Quintana Roo","San Luis Potosi","Sinaloa","Sonora","Tabasco","Tamaulipas","Tlaxcala","Veracruz","Yucatan","Zacatecas"};
	aciertos=0;
	errores=0;
	for(i=0;i<tam;i++)
	{
		p("Dime la capital de %s: ",est[i]);
		f(stdin);gets(resp[i]);
		if(strcmp(resp[i],capit[i])==0)
		{
			aciertos++;
			p("ACIERTO\n");
		}
		else
		{
			errores++;
			p("ERROR\n");
			p("La capital correcta es %s\n\n",capit[i]);
		}
		
	}
	p("\nTus aciertos fueron: %i",aciertos);
	p("\nTus errores fueron: %i",errores);
	return(0);
}
