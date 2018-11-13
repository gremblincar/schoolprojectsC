#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#inlcude <string.h>
#define d 365
#define pi 3.14159
#define ACTUAL 2018
#define MESACTUAL 5
#define MAX 100
#define p printf
#define s scanf

struct{
char puesto[20];char departamento[20];char nombre[20];
int horasT;
float Ch;float Sb;float imp;float Totalp;
}trabajador[100];


int a,b,x,y,c,op,n1,menu,resp,radio,age,year,dia,mes,numero,fact,i,tabla[MAX][MAX],filas,columnas,anp=0,sump=0,anip=0,sumip=0,anpr=0,lista[MAX];
int j,k,exten,n;
char opc,letra,h;
long int cua, cub;
float imp,st,ch,sb,base,altura,lado1,lado2,Area,Perimetro,altura,lado1,lado2,lado3,operacion,recultado,base,lado4,apotema;
//operaciones basicas case 4
int suma(int a,int b);
int resta(int a,int b);
void datos();
//opreciones basicas case 2
void sumaCPSR(int a,int b);
void restaCPSR(int a,int b);
void multiplicacionCPSR(int a,int b);
void residuoCPSR(int a,int b);
//operaciones basicas case3
int sumaSPCR();
int restaSPCR();
int multiplicacionSPCR();
int residuoSPCR();
//opreciones basicas case 1
void sumaSPSR();
void restaSPSR();
void multiplicacionSPSR();
void residuoSPSR();
//Estructuras if case1
void edad();
float nomebreTSPSR();
//Estructuras if case 2
void edadCPSR(int);
float nomebreTCPSR(float imp,float st,float ch,float sb);
// Estrucuras if case 3
int edadSPCR();
float nomebreTSPCR();
// Estructuras if case 4
int edadCPCR(int);
float nomebreTCPCR(float imp,float st,float ch,float sb);
//Estructuras Else case1
void trianguloSPSR();
void teclado();
//Estructuras Else case2
float trianguloCPSR(float base,float altura,float lado1,float lado2,float Area,float Perimetro);
void tecladoCPSR(char letra);
//Estructuras Else case 3
float trianguloSPCR();
char tecladoSPCR();
//Estrucuras Else case4
float trianguloCPCR(float base,float altura,float lado1,float lado2,float Area,float Perimetro);
char tecladoCPCR(char letra);
//Estructuras Switch case1
void formas();
void horoscopo();
void meses();
//Estructura Switch case 2
void formasCPSR(float altura,float lado1,float lado2,float lado3,float operacion,float recultado,float base,float lado4,float apotema);
void horoscopoCPSR(int year,int age);
void mesesCPSR(int mes,int dia,int year,int age);
//Estructuras Switch case 3
float formasSPCR();
void horoscopoSPCR();
void mesesSPCR();
//Estructuras Switch case 4
float formasCPCR(float altura,float lado1,float lado2,float lado3,float operacion,float recultado,float base,float lado4,float apotema);
int horoscopoCPCR(int year,int age);
int mesesCPCR(int mes,int dia,int year,int age);
//Repetitiva for case 1
void factorialSPSR();
void sumaSPSR();
//Repetitiva for case 2
void factorialCPSR(int numero,int fact);
void sumaparesCPSR(int numero, int a);
//Repetitiva for case 3
int factorialSPCR();
int sumaparesSPCR();
//Repetitiva For case 4
int factorialCPCR(int numero,int fact);
int sumaparesCPCR(int numero, int a);
//Repetitiva While case 1
void cuboSPSR();
void digitosSPSR();
//Repetitiva while case 2
void cuboCPSR(int cua,int cub,int numero);
void digitosCPSR(int numero);
//Repetitiva while case 3
int cuboSPCR();
int digitosSPCR();
//Repetitiva while case 4
int cuboCPCR(int cua,int cub,int numero);
int digitosCPCR(int numero);
//Repetitiva Do While case 1
void abecedarioSPSR();
 void tablasSPSR();
//Repetitiva Do While case 2
void abecedarioCPSR(char h);
void tablasCPSR(int numero,int a,int i);
//Repetitiva Do while case 3
int abecedarioSPCR();
int tablasSPCR();
//Repetitiva Do while case 4
int abecedarioCPCR(char h);
int tablasCPCR(int numero,int a,int i);
//Arreglos Unibi case 1
void numeroparSPSR();
void SumaListaSPSR();
//Arreglos Unibi case 2
void numeroparCSCR(int anp,int sump,int anip,int sumip,int anpr,int lista[MAX],int numero);
void SumaListaCPSR(int lista[MAX]);
//Arreglos Unibi case 3
int numeroparSPCR();
int SumaListaSPCR();
//Arreglos Unibi case 4
int numeroparCPCR(int anp,int sump,int anip,int sumip,int anpr,int lista[MAX],int numero);
int SumaListaCPCR(int lista[MAX]);
//Arreglos Bidi case 1
void pizarronSPSR();
void valoresSPSR();
//Arreglos Bidi case 2
int pizarronCPSR(int tabla[MAX][MAX]);
int valoresCPSR(int filas,int columnas,int x[MAX][MAX],int y[MAX][MAX]);
//Arreglos Bidi case 3
void pizarronSPCR(int tabla[MAX][MAX];);
int valoresSPCR();
//Arreglos Bidi case 4
int pizarronCPCR(int tabla[MAX][MAX]);
int valoresCPCR(int filas,int columnas,int x[MAX][MAX],int y[MAX][MAX]);
//Registros case 1
void datos2();
void nomina();
void pagos();
//Registros case 2
void nominaCPSR(int );
void pagosCPSR(int );
//Registros case 3
void datosSPCR();
float nominaSPCR();
float pagosSPCR();
//Registros case 4
void datosCPSCR(int);
float nominaCPCR(int);
float pagosCPCR(int);

int main()
{
    int tema,Estructura,ciclos,arreglos,funciones,registro, programa,funcion;
    int bucle;
    p("1.Secuencial\n2.Estructuras de control\n3.Repetitiva\n4.Arreglos\n5.Registro\n\n");
    p("Qué tipo de programa desea usar?: ")
    s("%d",&tema);
    system("cls");
    switch(tema){
case 1://secuencial
     p("con que funcion desea el programa?\n\n1.Sin pase de paremetro sin retorno\n2.Con pase de parametro sin retorno\n3.Sin pase de parametro con retorno\n4.Con retorno y con parametro  ");
            s("%d",&funcion);
            system("cls");
            switch(funcion){
        case 1://funciones SPSR//
                p("Que programa deseas? \n\n1.Operaciones basicas");
                s("%d",&programa);
                switch(programa){
                case 1: do{
        p("Que operacion deseas realizar?\n\n1.Suma\n2.Resta\n3.Multiplicacion\n4.Residuo");
        s("%d",&op);
        system("cls");
        switch(op){
    case 1:sumaSPSR();break;
    case 2:restaSPSR();break;
    case 3:multiplicacionSPSR();break;
    case 4:residuoSPSR();break;
    default: p("esa operacion no existe");
        }
    p("\nDeseas volver a correr el programa? S=SI");
    fflush(stdin); s("%s",&opc);
        }
        while(opc=='s' || opc=='S');
        getch();
                break;
                }
        break;
        case 2://funciones CPSR//
            p("Que programa deseas? \n\n1.Operaciones basicas");
                s("%d",&programa);
                switch(programa){
                case 1:do{
        p("teclea 2 numeros enteros: ");
        s("%d %d",&a,&b);
        system("cls");
        p("Que operacion deseas realizar?\n\n1.Suma\n2.Resta\n3.Multiplicacion\n4.Residuo");
        s("%d",&op);
        system("cls");
        switch(op){
    case 1:sumaCPSR(a,b);break;
    case 2:restaCPSR(a,b);break;
    case 3:multiplicacionCPSR(a,b);break;
    case 4:residuoCPSR(a,b);break;
    default: p("esa operacion no existe");
        }
    p("\nDeseas volver a correr el programa? S=SI");
    fflush(stdin);s("%s",&opc);
        }
        while(opc=='s' || opc=='S');
        getch();
                break;
                }
            break;
        case 3://funciones SPCR//
            p("Que programa deseas? \n\n1.Operaciones basicas");
                s("%d",&programa);
                switch(programa){
                case 1: do{

    p("Que operacion deseas realizar?\n\n1.Suma\n2.Resta\n3.Multiplicacion\n4.Residuo");
    s("%d",&op);
    system("cls");
    switch(op){
case 1:c=sumaSPCR();
p("Suma= %d",c);
break;
case 2:p("Resta = %d",restaSPCR());
break;
case 3:c=multiplicacionSPCR();
p("Multiplicación = %d",c);
break;
case 4:p("El residuo es = %d",residuoSPCR());break;
default: p("esa operacion no existe");
    }
   p("\nDeseas volver a correr el programa? S=SI");
   fflush(stdin); s("%s",&opc);
    }
     while(opc=='s' || opc=='S');
    getch();
                break;
                }
                break;
        break;
        case 4://funciones CPCR//
            p("Que programa deseas? \n\n1.Operaciones basicas");
                s("%d",&programa);
                switch(programa){
                case 1:
    do{
    datos();
    p("Que operacion deseas realizar?\n\n1.Suma\n2.Resta\n3.Multiplicacion\n4.Residuo");
    s("%d",&op);
    system("cls");
    switch(op){
case 1:c=suma(a,b);
p("Suma= %d",c);
break;
case 2:p("Resta = %d",resta(a,b));
break;
case 3:c=multiplicacion(a,b);
p("Multiplicación = %d",c);
break;
case 4:p("El residuo es = %d",residuo(a,b));break;
default: p("esa operacion no existe");
    }
   p("\nDeseas volver a correr el programa? S=SI");
   fflush(stdin);s("%s",&opc);
    }
     while(opc=='s' || opc=='S');
    getch();
                break;
                }
        break;
break;
}
case 2://Estructuras de control
p("Qué tipo de Estructura deseas?\n\n1.Simple\n2.Doble\n3.Multiple  ");
    s("%d",&Estructura);
    system("cls");
    switch(Estructura){
    case 1://simple//
            p("con que funcion desea el programa?\n\n1.Sin pase de paremetro sin retorno\n2.Con pase de parametro sin retorno\n3.Sin pase de parametro con retorno\n4.Con retorno y con parametro  ");
            s("%d",&funcion);
            system("cls");
            switch(funcion){
        case 1://funciones SPSR
                p("Que programa deseas? \n\n1.Edad en dias\n2.Nominas");
                s("%d",&programa);
                switch(programa){
                case 1:edad();
                       getch();
                break;
                case 2:nomebreTSPSR();
                break;
                }
        break;
        case 2://funciones CPSR//
            p("Que programa deseas? \n\n1.Edad en dias\n2.Nominas");
                s("%d",&programa);
                switch(programa){
                case 1:edadCPSR(n1);
                       getch();
                break;
                case 2: nomebreTCPSR(imp,st,ch,sb);
                break;
                }
                break;
        break;
        case 3://funciones SPCR//
            p("Que programa deseas? \n\n1.Edad en dias\n2.Nominas");
                s("%d",&programa);
                switch(programa){
                case 1:edadSPCR(n1);
                       getch();
                break;
                case 2:nomebreTSPCR(imp,st,ch,sb);
                break;
                }
                break;
        break;
        case 4://funciones CPCR//
            p("Que programa deseas? \n\n1.Edad en dias\n2.Nominas");
                s("%d",&programa);
                switch(programa){
                case 1: edadCPCR(n1);
                        getch();
                break;
                case 2:nomebreTCPCR(imp,st,ch,sb);
                break;
                }
                break;
        break;
        }
break;
 case 2://doble//
        p("con que funcion desea el programa?\n\n1.Sin pase de paremetro sin retorno\n2.Con pase de parametro sin retorno\n3.Sin pase de parametro con retorno\n4.Con retorno y con parametro  ");
            s("%d",&funcion);
            system("cls");
            switch(funcion){
        case 1://funciones SPSR//
                p("Que programa deseas? \n\n1.Area y tipo de triangulo.\n2.Presiona una tecla.");
                s("%d",&programa);
                switch(programa){
                case 1:  p("Area y perimetro de un triangulo\n\n");
                    trianguloSPSR();
                break;
                case 2:     p("Preciona una tecla:\n");
                            s("%c",&letra);
                            teclado();

                break;
                }
        break;
        case 2://funciones CPSR//
            p("Que programa deseas? \n\n1.Area y tipo de triangulo.\n2.Presiona una tecla.");
                s("%d",&programa);
                switch(programa){
                case 1:trianguloCPSR(base,altura,lado1,lado2,Area,Perimetro);
                break;
                case 2:p("Preciona una tecla:\n");
                        s("%c",&letra);
                        tecladoCPSR(letra);
                break;
                }
                break;
        break;
        case 3://funciones SPCR//
            p("Que programa deseas? \n\n1.Area y tipo de triangulo.\n2.Presiona una tecla.");
                s("%d",&programa);
                switch(programa){
                case 1:trianguloSPCR();
                break;
                case 2:p("Preciona una tecla:\n");
                        s("%c",&letra);
                        p("%c",tecladoSPCR(letra));

                break;
                }
                break;
        break;
        case 4://funciones CPCR//
            p("Que programa deseas? \n\n1.Area y tipo de triangulo.\n2.Presiona una tecla.");
                s("%d",&programa);
                switch(programa){
                case 1:trianguloCPCR(base,altura,lado1,lado2,Area,Perimetro);
                break;
                case 2:p("Preciona una tecla:\n");
                        s("%c",&letra);
                        p("%c",tecladoCPCR(letra));
                break;
                }
                break;
        break;
    }
case 3://multiple//
        p("con que funcion desea el programa?\n\n1.Sin pase de paremetro sin retorno\n2.Con pase de parametro sin retorno\n3.Sin pase de parametro con retorno\n4.Con retorno y con parametro  ");
            s("%d",&funcion);
            system("cls");
            switch(funcion){
        case 1://funciones SPSR//
                p("Que programa deseas? \n\n1.Area de Formas\n2.Horoscopo maya");
                s("%d",&programa);
                switch(programa){
                case 1:formas();
                break;
                case 2: p("Introduce el a%co que naciste:", 164);
    s("%i", &year);
    p("Seleccina el mes en que naciste:\n");
    p("1.enero\n2.Febrero\n3.Marzo\n4.Abril\n5.Mayo\n");
    p("6.junio\n7.Julio\n8. Agosto\n9.Septiembre\n10.Octubre\n11.Noviembre\n12.Diciembre\n");
    s("%i", &mes);
    p("Introduce el dia que naciste: ");
    s("%i", &dia);
    meses();
    horoscopo();
                break;
                }
        break;
        case 2://funciones CPSR//
            p("Que programa deseas? \n\n1.Area de Formas\n2.Horoscopo maya");
                s("%d",&programa);
                switch(programa){
                case 1: formasCPSR(altura,lado1,lado2,lado3,operacion,recultado,base,lado4,apotema);
                break;
                case 2:p("Introduce el a%co que naciste:", 164);
    s("%i", &year);
    p("Introducce el dia que naciste: ");
    s("%i", &dia);
    mesesCPSR(mes,dia,year,age);
    horoscopoCPSR(year,age);
                break;
                }
                break;
        break;
        case 3://funciones SPCR//
            p("Que programa deseas? \n\n1.Area de Formas\n2.Horoscopo maya");
                s("%d",&programa);
                switch(programa){
                case 1:formasSPCR();
                break;
                case 2:p("Introduce el a%co que naciste:", 164);
    s("%i",&year);
    p("Introducce el dia que naciste: ");
    s("%i",&dia);
    mesesSPCR();
    horoscopoSPCR();
                break;
                }
                break;
        break;
        case 4://funciones CPCR//
            p("Que programa deseas? \n\n1.Area de Formas\n2.Horoscopo maya");
                s("%d",&programa);
                switch(programa){
                case 1:formasCPCR(altura,lado1,lado2,lado3,operacion,recultado,base,lado4,apotema);
                break;
                case 2:
    p("Introduce el a%co que naciste:", 164);
    s("%i", &year);
    p("Introducce el dia que naciste: ");
    s("%i", &dia);
    mesesCPCR(mes,dia,year,age);
    horoscopoCPCR(year,age);

                break;
                }
                break;
        break;
    }
    break;
}
break;
case 3://Repetitiva
    p("Qué ciclo deseas usar?\n\n1.For\n2.While\n3.Do while");
    s("%d",&ciclos);
    system("cls");
      switch(ciclos){
    case 1://for//
         p("con que funcion desea el programa?\n\n1.Sin pase de paremetro sin retorno\n2.Con pase de parametro sin retorno\n3.Sin pase de parametro con retorno\n4.Con retorno y con parametro  ");
            s("%d",&funcion);
            system("cls");
            switch(funcion){
        case 1://funciones SPSR//
                p("Que programa deseas? \n\n1.Factorial de un numero.\n2.Suma de numeros pares");
                s("%d",&programa);
                switch(programa){
                case 1:do{

        factorialSPSR();


    p("\nDeseas Volver a correr el programa%c: 's'=SI o 'n'=NO \n",63);
    fflush(stdin);
    s("%c",&opc);
    }
    while (opc== 's' || opc=='n');
    getch();
                break;
                case 2:do{

	 sumaparesSPSR();

    p("Deseas Volver a correr el programa%c: 's' \n",63);
    fflush(stdin);s("%s",&opc);
   	}
	while (opc== 's' ||  opc== 's');
    getch ();
                break;
                }
        break;
        case 2://funciones CPSR//
            p("Que programa deseas? \n\n1.Factorial de un numero.\n2.Suma de numeros pares");
                s("%d",&programa);
                switch(programa){
                case 1:do{

        factorialCPSR(numero,fact);


    p("\nDeseas Volver a correr el programa%c: 's'=SI o 'n'=NO \n",63);
    fflush(stdin);
    s("%c",&opc);
    }
    while (opc== 's' || opc=='n');
    getch();
                break;
                case 2:do{

	 sumaparesCPSR(numero,a);

    p("Deseas Volver a correr el programa%c: 's' \n",63);
    fflush(stdin);s("%s",&opc);
   	}
	while (opc== 's' ||  opc== 's');
    getch ();
                break;
                }
                break;
        break;
        case 3://funciones SPCR//
            p("Que programa deseas? \n\n1.Factorial de un numero.\n2.Suma de numeros pares");
                s("%d",&programa);
                switch(programa){
                case 1:do{

        factorialSPCR(fact);

        p("\nDeseas Volver a correr el programa%c: 's'=SI o 'n'=NO \n",63);
        fflush(stdin);
        s("%c",&opc);
        }
        while (opc== 's' || opc=='n');
        getch();
                break;
                case 2:do{

	 sumaparesSPCR(a);

    p("Deseas Volver a correr el programa%c: 's' \n",63);
    fflush(stdin);s("%s",&opc);
   	}
	while (opc== 's' ||  opc== 's');
    getch ();
                break;
                }
                break;
        break;
        case 4://funciones CPCR//
            p("Que programa deseas? \n\n1.Factorial de un numero.\n2.Suma de numeros pares");
                s("%d",&programa);
                switch(programa){
                case 1:do{

        factorialCPCR(numero,fact);

        p("\nDeseas Volver a correr el programa%c: 's'=SI o 'n'=NO \n",63);
        fflush(stdin);
        s("%c",&opc);
        }
        while (opc== 's' || opc=='n');
        getch();
                break;
                case 2:do{

	 sumaparesCPCR(numero,a);

    p("Deseas Volver a correr el programa%c: 's' \n",63);
    fflush(stdin);s("%s",&opc);
   	}
	while (opc== 's' ||  opc== 's');
    getch ();
                break;
                }
                break;
        break;
    }
    break;
    case 2://while//
         p("con que función desea el programa?\n\n1.Sin pase de paremetro sin retorno\n2.Con pase de parametro sin retorno\n3.Sin pase de parametro con retorno\n4.Con retorno y con parametro  ");
            s("%d",&funcion);
            system("cls");
            switch(funcion){
        case 1://funciones SPSR//
                p("Que programa deseas? \n\n1.Cuadrado y Cubo de un numero.\n2.Digitos de un numero");
                s("%d",&programa);
                switch(programa){
                case 1:do
	{
	    cuboSPSR();

	p("Desea repetir el programa. S=SI || N=NO \n");
	fflush(stdin); s("%c", &opc);
	}
	while(opc=='S' || opc=='s');
	getch();
                break;
                case 2:do
	{
 		digitosSPSR();

	p("Desea repetir el programa? presiona 's' \n");
	fflush(stdin); s("%c", &opc);
	}
	while(opc=='S' || opc=='s');
	getch();
                break;
                }
        break;
        case 2://funciones CPSR//
            p("Que programa deseas? \n\n1.Cuadrado y Cubo de un numero\n2.Digitos de un numero");
                s("%d",&programa);
                switch(programa){
                case 1:do
	{
	    cuboCPSR(cua,cub,numero);

	p("Desea repetir el programa. S=SI || N=NO \n");
	fflush(stdin); s("%c", &opc);
	}
	while(opc=='S' || opc=='s');
	getch();
                break;
                case 2:do
	{
 		digitosCPSR(numero);

	p("Desea repetir el programa? presiona 's' \n");
	fflush(stdin); s("%c", &opc);
	}
	while(opc=='S' || opc=='s');
	getch();
                break;
                }
                break;
        break;
        case 3://funciones SPCR//
            p("Que programa deseas? \n\n1.Cuadrado y Cubo de un numero.\n2.Digitos de un numero");
                s("%d",&programa);
                switch(programa){
                case 1:do
	{
	    cuboSPCR(cua,cub,numero);

	p("Desea repetir el programa. S=SI || N=NO \n");
	fflush(stdin); s("%c", &opc);
	}
	while(opc=='S' || opc=='s');
	getch();
                break;
                case 2:do
	{
 		digitosSPCR(i);

	p("Desea repetir el programa? presiona 's' \n");
	fflush(stdin); s("%c", &opc);
	}
	while(opc=='S' || opc=='s');
	getch();
                break;
                }
                break;
        break;
        case 4://funciones CPCR//
            p("Que programa deseas? \n\n1.Cuadrado y cubo de un numero.\n2.Digitos de un numero");
                s("%d",&programa);
                switch(programa){
                case 1:do
	{
	    cuboCPCR(cua,cub,numero);

	p("Desea repetir el programa. S=SI || N=NO \n");
	fflush(stdin); s("%c", &opc);
	}
	while(opc=='S' || opc=='s');
	getch();
                break;
                case 2:do
	{
 		digitosCPCR(numero);

	p("Desea repetir el programa? presiona 's' \n");
	fflush(stdin); s("%c", &opc);
	}
	while(opc=='S' || opc=='s');
	getch();
                break;
                }
                break;
        break;
    }
    break;
case 3://Do while//
         p("con que función desea el programa?\n\n1.Sin pase de paremetro sin retorno\n2.Con pase de parametro sin retorno\n3.Sin pase de parametro con retorno\n4.Con retorno y con parametro  ");
            s("%d",&funcion);
            system("cls");
            switch(funcion){
        case 1://funciones SPSR//
                p("Que programa deseas? \n\n1.Impresion de abecedario\n2.Tablas de multiplicar");
                s("%d",&programa);
                switch(programa){
               case 1: do {
        abecedarioSPSR();

    p("\nDeseas volver a correr el programa? presiona 's'");
    fflush(stdin);s("%c",&opc);
    }
    while(opc=='s' || opc=='S');
    getch ();
                break;
                case 2:do {
            tablasSPSR(numero,a,i);

        p("\n\nDeseas Volver a correr el programa%c: presione 's' o cualquier tecla para salir \n",63);
        fflush(stdin);s("%s",&opc);
        }
        while (opc== 's' ||  opc== 'S');
        getch ();
                break;
                }
        break;
        case 2://funciones CPSR//
            p("Que programa deseas? \n\n1.Impresion de abecedario\n2.Tablas de multiplicar");
                s("%d",&programa);
                switch(programa){
                case 1:do {
        abecedarioCPSR(h);

    p("\nDeseas volver a correr el programa? presiona 's'");
    fflush(stdin);s("%c",&opc);
    }
    while(opc=='s' || opc=='S');
    getch ();
                break;
                case 2:do {
            tablasCPSR(numero,a,i);

        p("\n\nDeseas Volver a correr el programa%c: presione 's' o cualquier tecla para salir \n",63);
        fflush(stdin);s("%s",&opc);
        }
        while (opc== 's' ||  opc== 'S');
        getch ();
                break;
                }
                break;
        break;
        case 3://funciones SPCR//
            p("Que programa deseas? \n\n1.Impresion de abecedario\n2.Tablas de multiplicar");
                s("%d",&programa);
                switch(programa){
                case 1: do {
        abecedarioSPCR(h);

    p("\nDeseas volver a correr el programa? presiona 's'");
    fflush(stdin);s("%c",&opc);
    }
    while(opc=='s' || opc=='S');
    getch ();
                break;
                case 2:do {
            tablasSPCR(numero,a,i);

        p("\n\nDeseas Volver a correr el programa%c: presione 's' o cualquier tecla para salir \n",63);
        fflush(stdin);s("%s",&opc);
        }
        while (opc== 's' ||  opc== 'S');
        getch ();
                break;
                }
        break;
        case 4://funciones CPCR//
            p("Que programa deseas? \n\n1.Impresion de abecedario\n2.Tablas de multiplicar");
                s("%d",&programa);
                switch(programa){
                case 1:do {
        abecedarioCPCR(h);

    p("\nDeseas volver a correr el programa? presiona 's'");
    fflush(stdin);s("%c",&opc);
    }
    while(opc=='s' || opc=='S');
    getch ();
                break;
                case 2:do {
            tablasCPCR(numero,a,i);

        p("\n\nDeseas Volver a correr el programa%c: presione 's' o cualquier tecla para salir \n",63);
        fflush(stdin);s("%s",&opc);
        }
        while (opc== 's' ||  opc== 'S');
        getch ();
                break;
                }
                break;
        break;
    }
    break;
}
break;
case 4://Arreglos
       p("Que tipo de Arrreglo deseas?\n\n1.Unibidimencionales\n2.Bidimencionales");
        s("%d",&arreglos);
        switch(arreglos){
    case 1://Unibidimencional
        p("con que funcion desea el programa?\n\n1.Sin pase de paremetro sin retorno\n2.Con pase de parametro sin retorno\n3.Sin pase de parametro con retorno\n4.Con retorno y con parametro  ");
            s("%d",&funcion);
            system("cls");
            switch(funcion){
        case 1://funciones SPSR//
            p("Que programa deseas? \n\n1.Numeros pares e impares\n2.Suma de listas");
                s("%d",&programa);
                switch(programa){
                case 1:numeroparSPSR();
                break;
                case 2:SumaListaSPSR();
                break;
            }
        break;
        case 2://funciones CPSR//
            p("Que programa deseas? \n\n1.Numeros pares e impares\n2.Suma de listas");
                s("%d",&programa);
                switch(programa){
               case 1:numeroparCPSR(anp,sump,anip,sumip,anpr,lista,numero);
                break;
                case 2:SumaListaCPSR(lista);
                break;
            }
        break;
        case 3://funciones SPCR//
            p("Que programa deseas? \n\n1.Numeros pares e impares\n2.Suma de listas");
                s("%d",&programa);
                switch(programa){
               case 1:numeroparSPCR();
                break;
                case 2:SumaListaSPCR();
                break;
            }
        break;
        case 4://funciones CPCR//
            p("Que programa deseas? \n\n1.Numeros pares e impares\n2.Suma de listas");
                s("%d",&programa);
                switch(programa){
               case 1:numeroparCPCR(anp,sump,anip,sumip,anpr,lista,numero);
                break;
                case 2:SumaListaCPCR(lista);
                break;
                }
        break;
            }
break;
    case 2:// BIdimencional
        p("con que funcion desea el programa?\n\n1.Sin pase de paremetro sin retorno\n2.Con pase de parametro sin retorno\n3.Sin pase de parametro con retorno\n4.Con retorno y con parametro  ");
            s("%d",&funcion);
            system("cls");
            switch(funcion){
        case 1://funciones SPSR//
            p("Que programa deseas? \n\n1.Pizarron\n2.Suma de matrices");
                s("%d",&programa);
                switch(programa){
                case 1:pizarronSPSR();
                break;
                case 2:valoresSPSR();
                break;
            }
        break;
        case 2://funciones CPSR//
            p("Que programa deseas? \n\n1.Pizarron\n2.Suma de matrices.");
                s("%d",&programa);
                switch(programa){
               case 1:pizarronCPSR(tabla);
                break;
                case 2:valoresCPSR(filas,columnas,x,y);
                break;
            }
        break;
        case 3://funciones SPCR//
            p("Que programa deseas? \n\n1.Pizarron\n2.Suma de matrices");
                s("%d",&programa);
                switch(programa){
               case 1: pizarronSPCR(tabla);
                break;
                case 2:valoresSPCR();
                break;
            }
        break;
        case 4://funciones CPCR//
            p("Que programa deseas? \n\n1.Pizarron\n2.Suma de matrices");
                s("%d",&programa);
                switch(programa){
               case 1:pizarronCPCR(tabla);
                break;
                case 2:valoresCPCR(filas,columnas,x,y);
                break;
                }
        break;
            }
break;
    break;
        }
break;
case 5://Registros
    p("¡¡ Esta opcion cuanta con un solo programa !!\n\n");
        p("con que funcion desea el programa?\n\n1.Sin pase de paremetro sin retorno\n2.Con pase de parametro sin retorno\n3.Sin pase de parametro con retorno\n4.Con retorno y con parametro  ");
            s("%d",&funcion);
            system("cls");
            switch(funcion){
            case 1://SPSR
                    datos2();
                    pagos();
                    nomina();

            break;
            case 2://CPSR
                p("Cuantas nominas necesita? ");
                s("%d",&n);

                pagosCPSR(n);
                nominaCPSR(n);

            break;
            case 3://SPCR

                datosSPCR();
                pagosSPCR();
                nominaSPCR();
            break;
            case 4://CPCR
                datosCPSCR(n);
                pagosCPCR(n);
                nominaCPCR(n);
            break;
        }
break;
    }

 return 0;
}
//operaciones basicas case 4
void datos(){
    p("teclea 2 numeros enteros: ");
    s("%d %d",&a,&b);
}
int multiplicacion(int a,int b){
    c=a*b;
return c;
}
int residuo(int a,int b){
return c=a%b;
}
int suma(int a,int b){
c=a+b;
return c;
}
int resta(int a,int b){
return a-b;
}
//operaciones basicas case 2
void multiplicacionCPSR(int a,int b){
    p("Al multiplicacion de %d x %d = %d",a,b,a*b);
}
void residuoCPSR(int a,int b){
    p("El residuo de %d % %d = %d",a,b,a%b);
}
void sumaCPSR(int a,int b){

p("La suma de %d + %d = %d",a,b,a+b);
}
void restaCPSR(int a,int b){
int c;
c=a-b;
p("La resta de %d - %d = %d",a,b,c);
}
//operacion basicas case 3
int multiplicacionSPCR(){
    datos();
    c=a*b;
return c;
}
int residuoSPCR(){
    datos();
return c=a%b;
                }
int sumaSPCR(){
datos();
c=a+b;
return c;
}
int restaSPCR(){
    datos();
return a-b;
}
//operaciones basicas case 1
void multiplicacionSPSR(){
    int x,y;
    p("teclea 2 numeros enteros: ");
    s("%d %d",&x,&y);
    p("Al multiplicacion de %d x %d = %d",x,y,x*y);
}
void residuoSPSR(){
    int x,y;
    p("teclea 2 numeros enteros: ");
    s("%d %d",&x,&y);
    p("El residuo de %d % %d = %d",x,y,x%y);
}
void sumaSPSR(){
int q,r;
p("teclea don numeros enteros: ");
s("%d %d",&q,&r);
p("La suma de %d + %d = %d",q,r,q+r);
}
void restaSPSR(){
int a,b,c;
p("Tecleados numeros enteros: ");
s("%d %d",&a,&b);
c=a-b;
p("La resta de %d - %d = %d",a,b,c);
}
//Estructura if case 1:
void edad(){
    int n1;
    char n[30];
    p("Introduce tu nombre: ");
    fflush(stdin);gets(n);

     p("Ingresa tu edad: ");
    s("%d",&n1);
    if(n1>15){
        p("%s Tu edad en dias es: %d",n,n1*d);
    }
    if(n1<=15){
        p("Tu eres muy joven");
    }
 }
float nomebreTSPSR(){

    int ht;
    float imp,st,ch,sb;
    char n[50];
    p("Nombre del trabajador: \n");
    fflush(stdin);gets(n);
    p("Horas trabajadas: \n");
    s("%d",&ht);
    p("Costo por hora: \n");
    s("%f",&ch);
    if(ht<=40){
        sb=ht*ch;

    }
    imp=sb*2;
    st=sb-imp;
    system("cls");

    p("Nombre del trabajador: %s\n",n);
    p("Horas que trabajo: %d\n",ht);
    p("Costo por hora : %.2f\n",ch);
    p("Sueldo base: %.2f\n",sb);
    p("Impuesto: %.2f\n",imp);
    p("Total a pagar: %.2f",st);
return 0;
}
//estructuras ifcase 2
void edadCPSR(int n1){

    char n[30];
    p("Introduce tu nombre: ");
    fflush(stdin);gets(n);

     p("Ingresa tu edad: ");
    s("%d",&n1);
    if(n1>15){
        p("%s Tu edad en dias es: %d",n,n1*d);
    }
    if(n1<=15){
        p("Tu eres muy joven");
    }
 }
float nomebreTCPSR(float imp,float st,float ch,float sb){
    int ht;
    char n[50];
    p("Nombre del trabajador: \n");
    fflush(stdin);gets(n);
    p("Horas trabajadas: \n");
    s("%d",&ht);
    p("Costo por hora: \n");
    s("%f",&ch);
    if(ht<=40){
        sb=ht*ch;

    }
    imp=sb*2;
    st=sb-imp;
    system("cls");

    p("Nombre del trabajador: %s\n",n);
    p("Horas que trabajo: %d\n",ht);
    p("Costo por hora : %.2f\n",ch);
    p("Sueldo base: %.2f\n",sb);
    p("Impuesto: %.2f\n",imp);
    p("Total a pagar: %.2f",st);

}
 //estructuras if case 3
 int edadSPCR(){

    int n1;
    char n[30];
    p("Introduce tu nombre: ");
    fflush(stdin);gets(n);

     p("Ingresa tu edad: ");
    s("%d",&n1);
    if(n1>15){
        p("%s Tu edad en dias es: %d",n,n1*d);
    }
    if(n1<=15){
        p("Tu eres muy joven");
    }
return n1;
 }
 float nomebreTSPCR(){
    int ht;
    char n[50];
    float imp,st,ch,sb;
    p("Nombre del trabajador: \n");
    fflush(stdin);gets(n);
    p("Horas trabajadas: \n");
    s("%d",&ht);
    p("Costo por hora: \n");
    s("%f",&ch);
    if(ht<=40){
        sb=ht*ch;

    }
    imp=sb*2;
    st=sb-imp;
    system("cls");

    p("Nombre del trabajador: %s\n",n);
    p("Horas que trabajo: %d\n",ht);
    p("Costo por hora : %.2f\n",ch);
    p("Sueldo base: %.2f\n",sb);
    p("Impuesto: %.2f\n",imp);
    p("Total a pagar: %.2f",st);
return imp,st,ch,sb;
}
//estructuras if case 4
int edadCPCR(int n1){

    char n[30];
    p("Introduce tu nombre: ");
    fflush(stdin);gets(n);

     p("Ingresa tu edad: ");
    s("%d",&n1);
    if(n1>15){
        p("%s Tu edad en dias es: %d",n,n1*d);
    }
    if(n1<=15){
        p("Tu eres muy joven");
    }
return n1;
 }
float nomebreTCPCR(float imp,float st,float ch,float sb){
    int ht;
    char n[50];
    p("Nombre del trabajador: \n");
    fflush(stdin);gets(n);
    p("Horas trabajadas: \n");
    s("%d",&ht);
    p("Costo por hora: \n");
    s("%f",&ch);
    if(ht<=40){
        sb=ht*ch;

    }
    imp=sb*2;
    st=sb-imp;
    system("cls");

    p("Nombre del trabajador: %s\n",n);
    p("Horas que trabajo: %d\n",ht);
    p("Costo por hora : %.2f\n",ch);
    p("Sueldo base: %.2f\n",sb);
    p("Impuesto: %.2f\n",imp);
    p("Total a pagar: %.2f",st);
return 0;
}
//Estructuras else case 1
void trianguloSPSR(){

    float base,altura,lado1,lado2,Area,Perimetro;

    p("Introduce la base: ");
    s("%f", &base);
    p("Cual es la longitud de uno de los lados del triangulo:\n");
    s("%f", &lado1);
    p("Cual es la longitud de uno de los lados del triangulo:\n");
    s("%f", &lado2);
    p("Introduce la altura del triangulo:\n");
    s("%f", &altura);

    Area= (base * altura) /2;
    Perimetro= base+lado1+lado2;
    if (base==lado1 && base==lado2 && lado1==lado2)
       p("Equilatero\n");
       else
        if (base==lado1 || base==lado2 || lado1==lado2)
       p("Escaleno\n");
       else
        if (base!=lado1 && base!=lado2 && lado1!=lado2)
       p("Isoceles\n");
    p("El area del triangulo es; %.2f\n",Area);
    p("El perimetro de un triangulo es; %.2f\n",Perimetro);
    }
void teclado(){
   if (letra>=32 && letra<=47)
            p("La tecla es: %c",letra);
            else
            if (letra>=47 && letra<=57)
                p("La %c es un digito: ", letra);
                else
                    if (letra>=58 && letra<=64)
                    p("La tecla %c es un caracter especial:",letra);
                else
                    if (letra>=65 && letra<=90)
                    p("La tecla %c es una letra del alfabeto en mayuscula",letra);
                else
                    if (letra>=91 && letra<=96)
                    p("La tecla %c es un caracter:",letra);
                else
                    if (letra>=97 && letra<=122)
                    p("La tecla %c es una lera del alfabeto en minuscula",letra);
                else
                    if (letra>=123 && letra<=255)
                    p("La tecla %c es una tecla de tipo caracter especial",letra);
        return 0;
}

//Estructuras else case 2
float trianguloCPSR(float base,float altura,float lado1,float lado2,float Area,float Perimetro){

    p("Introduce la base: ");
    s("%f", &base);
    p("Cual es la longitud de uno de los lados del triangulo:\n");
    s("%f", &lado1);
    p("Cual es la longitud de uno de los lados del triangulo:\n");
    s("%f", &lado2);
    p("Introduce la altura del triangulo:\n");
    s("%f", &altura);

    Area= (base * altura) /2;
    Perimetro= base+lado1+lado2;
    if (base==lado1 && base==lado2 && lado1==lado2)
       p("Equilatero\n");
       else
        if (base==lado1 || base==lado2 || lado1==lado2)
       p("Escaleno\n");
       else
        if (base!=lado1 && base!=lado2 && lado1!=lado2)
       p("Isoceles\n");
    p("El area del triangulo es; %.2f\n",Area);
    p("El perimetro de un triangulo es; %.2f\n",Perimetro);
    }
void tecladoCPSR(char letra){

   if (letra>=32 && letra<=47)
            p("La tecla es: %c",letra);
            else
            if (letra>=47 && letra<=57)
                p("La %c es un digito: ", letra);
                else
                    if (letra>=58 && letra<=64)
                    p("La tecla %c es un caracter especial:",letra);
                else
                    if (letra>=65 && letra<=90)
                    p("La tecla %c es una letra del alfabeto en mayuscula",letra);
                else
                    if (letra>=91 && letra<=96)
                    p("La tecla %c es un caracter:",letra);
                else
                    if (letra>=97 && letra<=122)
                    p("La tecla %c es una lera del alfabeto en minuscula",letra);
                else
                    if (letra>=123 && letra<=255)
                    p("La tecla %c es una tecla de tipo caracter especial",letra);
}
//Estructuras else case 3
float trianguloSPCR(){

    float base,altura,lado1,lado2,Area,Perimetro;

    p("Introduce la base: ");
    s("%f", &base);
    p("Cual es la longitud de uno de los lados del triangulo:\n");
    s("%f", &lado1);
    p("Cual es la longitud de uno de los lados del triangulo:\n");
    s("%f", &lado2);
    p("Introduce la altura del triangulo:\n");
    s("%f", &altura);

    Area= (base * altura) /2;
    Perimetro= base+lado1+lado2;
    if (base==lado1 && base==lado2 && lado1==lado2)
       p("Equilatero\n");
       else
        if (base==lado1 || base==lado2 || lado1==lado2)
       p("Escaleno\n");
       else
        if (base!=lado1 && base!=lado2 && lado1!=lado2)
       p("Isoceles\n");
    p("El area del triangulo es; %.2f\n",Area);
    p("El perimetro de un triangulo es; %.2f\n",Perimetro);
    }
char tecladoSPCR(){
   if (letra>=32 && letra<=47)
            p("La tecla es: %c",letra);
            else
            if (letra>=47 && letra<=57)
                p("La %c es un digito: ", letra);
                else
                    if (letra>=58 && letra<=64)
                    p("La tecla %c es un caracter especial:",letra);
                else
                    if (letra>=65 && letra<=90)
                    p("La tecla %c es una letra del alfabeto en mayuscula",letra);
                else
                    if (letra>=91 && letra<=96)
                    p("La tecla %c es un caracter:",letra);
                else
                    if (letra>=97 && letra<=122)
                    p("La tecla %c es una lera del alfabeto en minuscula",letra);
                else
                    if (letra>=123 && letra<=255)
                    p("La tecla %c es una tecla de tipo caracter especial",letra);
    return letra;
}
//Estructuras else case 4
float trianguloCPCR(float base,float altura,float lado1,float lado2,float Area,float Perimetro){

    p("Introduce la base: ");
    s("%f", &base);
    p("Cual es la longitud de uno de los lados del triangulo:\n");
    s("%f", &lado1);
    p("Cual es la longitud de uno de los lados del triangulo:\n");
    s("%f", &lado2);
    p("Introduce la altura del triangulo:\n");
    s("%f", &altura);

    Area= (base * altura) /2;
    Perimetro= base+lado1+lado2;
    if (base==lado1 && base==lado2 && lado1==lado2)
       p("Equilatero\n");
       else
        if (base==lado1 || base==lado2 || lado1==lado2)
       p("Escaleno\n");
       else
        if (base!=lado1 && base!=lado2 && lado1!=lado2)
       p("Isoceles\n");
    p("El area del triangulo es; %.2f\n",Area);
    p("El perimetro de un triangulo es; %.2f\n",Perimetro);

    return 0;
    }
char tecladoCPCR(char letra){

   if (letra>=32 && letra<=47)
            p("La tecla es: %c",letra);
            else
            if (letra>=47 && letra<=57)
                p("La %c es un digito: ", letra);
                else
                    if (letra>=58 && letra<=64)
                    p("La tecla %c es un caracter especial:",letra);
                else
                    if (letra>=65 && letra<=90)
                    p("La tecla %c es una letra del alfabeto en mayuscula",letra);
                else
                    if (letra>=91 && letra<=96)
                    p("La tecla %c es un caracter:",letra);
                else
                    if (letra>=97 && letra<=122)
                    p("La tecla %c es una lera del alfabeto en minuscula",letra);
                else
                    if (letra>=123 && letra<=255)
                    p("La tecla %c es una tecla de tipo caracter especial",letra);
                    return letra;
}
//Estructuras Switch case1
void formas(){

    int menu,resp, radio;
    float altura,lado1,lado2,lado3,operacion,recultado,base,lado4,apotema;

    p("1 triangulo\n");
    p("2 rectangulo\n");
    p("3 cuadrado\n");
    p("4 circulo\n");
    p("5 pentagono\n");
    s("%d", &menu);

    p("desea saber el area o el perimetro:\n");
    p("1 area\n");
    p("2 perimetro\n");
    s("%d", &resp);

    if (resp==1) {

        switch (menu){

    case 1:
        p("dime la base\n");
        s("%f", &base);
        p("dame la altura\n");
        s("%f", &altura);
        operacion= (base*altura)/2;
        break;

    case 2:
        p("dime la base\n");
        s("%f", &base);
        p("dame la altura\n");
        s("%f", &altura);
        operacion= base*altura;
        break;

    case 3:
        p("dime la base\n");
        s("%f", &base);
        p("dame la altura\n");
        s("%f", &altura);
        operacion= base*altura;
        break;

    case 4:
        p("dame el radio\n");
        s("%i", &radio);
        operacion= radio*radio*pi;
        break;

    case 5:
        p("introduce el lado\n");
        s("%f", &lado1);
        p("Dime la medida del apotema\n");
        s("%f", &apotema);
        operacion= (5*lado1*apotema)/2;
        break;

        }
}
p("El resultado es: %.2f\n", operacion);
return 0;
}
void horoscopo(){
    age=ACTUAL-year;
}
void meses(){

     switch(mes){
case 1:
    if( (mes==1 && dia>=10) || (mes==2 && dia <=6))
    p("Eres mono\n");
    break;
case 2:
    if( (mes==2 && dia>=7) || (mes==3 && dia <=6))
    p("alcon\n");
    break;
case 3:
    if( (mes==3 && dia>=7) || (mes==4 && dia <=3))
    p("Jaguar\n");
    break;
case 4:
    if( (mes==4 && dia>=4) || (mes==5 && dia <=1))
    p("zorro\n");
    break;
case 5:
    if( (mes==5 && dia>=2) || (mes== 5&& dia <=29))
    p("Serpiente\n");
    break;
case 6:
    if( (mes==5 && dia>=30) || (mes==6 && dia <=26))
    p("Ardilla\n");
    break;
case 7:
    if( (mes==6 && dia>=27) || (mes==7 && dia <=25))
    p("Tortuga\n");
    break;
case 8:
    if( (mes==7 && dia>=26) || (mes==8 && dia <=22))
    p("Murcielago\n");
    break;
case 9:
    if( (mes==8 && dia>=23) || (mes==9 && dia <=19))
    p("Escorpion\n");
    break;
case 10:
    if( (mes==9 && dia>=20) || (mes==10 && dia <=17))
    p("Venado\n");
    break;
case 11:
    if( (mes==10 && dia>=18) || (mes==11 && dia <=14))
    p("Lechuza\n");
    break;
case 12:
    if((mes==11 && dia>=15) || (mes==12 && dia <=12))
    p("Pavo real\n");
    break;

    }
     if( (mes==12 && dia>=13) || (mes==1 && dia <=9))
        p("Lagarto\n");

    if(year%4== 0)
        p("Naciste en a%co bisiesto\n",164);
         age= ACTUAL - year;
    if (mes <=MESACTUAL)
        p("\nTienes %d a%cos\n",age,164);
    if(mes > MESACTUAL)
        p("\nTienes %d a%cos\n",age-1,164);
}
//Estructuras Switch case 2
void formasCPSR(float altura,float lado1,float lado2,float lado3,float operacion,float recultado,float base,float lado4,float apotema){

    int menu,resp, radio;

    p("1 triangulo\n");
    p("2 rectangulo\n");
    p("3 cuadrado\n");
    p("4 circulo\n");
    p("5 pentagono\n");
    s("%d", &menu);

    p("desea saber el area o el perimetro:\n");
    p("1 area\n");
    p("2 perimetro\n");
    s("%d", &resp);

    if (resp==1) {

        switch (menu){

    case 1:
        p("dime la base\n");
        s("%f", &base);
        p("dame la altura\n");
        s("%f", &altura);
        operacion= (base*altura)/2;
        break;

    case 2:
        p("dime la base\n");
        s("%f", &base);
        p("dame la altura\n");
        s("%f", &altura);
        operacion= base*altura;
        break;

    case 3:
        p("dime la base\n");
        s("%f", &base);
        p("dame la altura\n");
        s("%f", &altura);
        operacion= base*altura;
        break;

    case 4:
        p("dame el radio\n");
        s("%i", &radio);
        operacion= radio*radio*pi;
        break;

    case 5:
        p("introduce el lado\n");
        s("%f", &lado1);
        p("Dime la medida del apotema\n");
        s("%f", &apotema);
        operacion= (5*lado1*apotema)/2;
        break;

        }
}
p("El resultado es: %.2f\n", operacion);
}
void horoscopoCPSR(int year, int age){
    age=ACTUAL-year;
}
void mesesCPSR(int mes,int dia,int year,int age){

    p("Seleccina el mes en que naciste:\n");
    p("1.enero\n2.Febrero\n3.Marzo\n4.Abril\n5.Mayo\n");
    p("6.junio\n7.Julio\n8. Agosto\n9.Septiembre\n10.Octubre\n11.Noviembre\n12.Diciembre\n");
    s("%i", &mes);

     switch(mes){
case 1:
    if( (mes==1 && dia>=10) || (mes==2 && dia <=6))
    p("Eres mono\n");
    break;
case 2:
    if( (mes==2 && dia>=7) || (mes==3 && dia <=6))
    p("alcon\n");
    break;
case 3:
    if( (mes==3 && dia>=7) || (mes==4 && dia <=3))
    p("Jaguar\n");
    break;
case 4:
    if( (mes==4 && dia>=4) || (mes==5 && dia <=1))
    p("zorro\n");
    break;
case 5:
    if( (mes==5 && dia>=2) || (mes== 5&& dia <=29))
    p("Serpiente\n");
    break;
case 6:
    if( (mes==5 && dia>=30) || (mes==6 && dia <=26))
    p("Ardilla\n");
    break;
case 7:
    if( (mes==6 && dia>=27) || (mes==7 && dia <=25))
    p("Tortuga\n");
    break;
case 8:
    if( (mes==7 && dia>=26) || (mes==8 && dia <=22))
    p("Murcielago\n");
    break;
case 9:
    if( (mes==8 && dia>=23) || (mes==9 && dia <=19))
    p("Escorpion\n");
    break;
case 10:
    if( (mes==9 && dia>=20) || (mes==10 && dia <=17))
    p("Venado\n");
    break;
case 11:
    if( (mes==10 && dia>=18) || (mes==11 && dia <=14))
    p("Lechuza\n");
    break;
case 12:
    if((mes==11 && dia>=15) || (mes==12 && dia <=12))
    p("Pavo real\n");
    break;

    }
     if( (mes==12 && dia>=13) || (mes==1 && dia <=9))
        p("Lagarto\n");

    if(year%4== 0)
        p("Naciste en a%co bisiesto\n",164);
         age= ACTUAL - year;
    if (mes <=MESACTUAL)
        p("\nTienes %d a%cos\n",age,164);
    if(mes > MESACTUAL)
        p("\nTienes %d a%cos\n",age-1,164);
}
//Estructuras Switch case 3
float formasSPCR(){

    int menu,resp, radio;
    float altura,lado1,lado2,lado3,operacion,recultado,base,lado4,apotema;

    p("1 triangulo\n");
    p("2 rectangulo\n");
    p("3 cuadrado\n");
    p("4 circulo\n");
    p("5 pentagono\n");
    s("%d", &menu);

    p("desea saber el area o el perimetro:\n");
    p("1 area\n");
    p("2 perimetro\n");
    s("%d", &resp);

    if (resp==1) {

        switch (menu){

    case 1:
        p("dime la base\n");
        s("%f", &base);
        p("dame la altura\n");
        s("%f", &altura);
        operacion= (base*altura)/2;
        break;

    case 2:
        p("dime la base\n");
        s("%f", &base);
        p("dame la altura\n");
        s("%f", &altura);
        operacion= base*altura;
        break;

    case 3:
        p("dime la base\n");
        s("%f", &base);
        p("dame la altura\n");
        s("%f", &altura);
        operacion= base*altura;
        break;

    case 4:
        p("dame el radio\n");
        s("%i", &radio);
        operacion= radio*radio*pi;
        break;

    case 5:
        p("introduce el lado\n");
        s("%f", &lado1);
        p("Dime la medida del apotema\n");
        s("%f", &apotema);
        operacion= (5*lado1*apotema)/2;
        break;

        }
}
p("El resultado es: %.2f\n", operacion);
return 0;
}
void horoscopoSPCR(){
    age=ACTUAL-year;
    return 0;
}
void mesesSPCR(){

    p("Seleccina el mes en que naciste:\n");
    p("1.enero\n2.Febrero\n3.Marzo\n4.Abril\n5.Mayo\n");
    p("6.junio\n7.Julio\n8. Agosto\n9.Septiembre\n10.Octubre\n11.Noviembre\n12.Diciembre\n");
    s("%i", &mes);

     switch(mes){
case 1:
    if( (mes==1 && dia>=10) || (mes==2 && dia <=6))
    p("Eres mono\n");
    break;
case 2:
    if( (mes==2 && dia>=7) || (mes==3 && dia <=6))
    p("alcon\n");
    break;
case 3:
    if( (mes==3 && dia>=7) || (mes==4 && dia <=3))
    p("Jaguar\n");
    break;
case 4:
    if( (mes==4 && dia>=4) || (mes==5 && dia <=1))
    p("zorro\n");
    break;
case 5:
    if( (mes==5 && dia>=2) || (mes== 5&& dia <=29))
    p("Serpiente\n");
    break;
case 6:
    if( (mes==5 && dia>=30) || (mes==6 && dia <=26))
    p("Ardilla\n");
    break;
case 7:
    if( (mes==6 && dia>=27) || (mes==7 && dia <=25))
    p("Tortuga\n");
    break;
case 8:
    if( (mes==7 && dia>=26) || (mes==8 && dia <=22))
    p("Murcielago\n");
    break;
case 9:
    if( (mes==8 && dia>=23) || (mes==9 && dia <=19))
    p("Escorpion\n");
    break;
case 10:
    if( (mes==9 && dia>=20) || (mes==10 && dia <=17))
    p("Venado\n");
    break;
case 11:
    if( (mes==10 && dia>=18) || (mes==11 && dia <=14))
    p("Lechuza\n");
    break;
case 12:
    if((mes==11 && dia>=15) || (mes==12 && dia <=12))
    p("Pavo real\n");
    break;

    }
     if( (mes==12 && dia>=13) || (mes==1 && dia <=9))
        p("Lagarto\n");

    if(year%4== 0)
        p("Naciste en a%co bisiesto\n",164);
         age= ACTUAL - year;
    if (mes <=MESACTUAL)
        p("\nTienes %d a%cos\n",age,164);
    if(mes > MESACTUAL)
        p("\nTienes %d a%cos\n",age-1,164);
}
//Estructuras Switch case 4
float formasCPCR(float altura,float lado1,float lado2,float lado3,float operacion,float recultado,float base,float lado4,float apotema){

    int menu,resp, radio;

    p("1 triangulo\n");
    p("2 rectangulo\n");
    p("3 cuadrado\n");
    p("4 circulo\n");
    p("5 pentagono\n");
    s("%d", &menu);

    p("desea saber el area o el perimetro:\n");
    p("1 area\n");
    p("2 perimetro\n");
    s("%d", &resp);

    if (resp==1) {

        switch (menu){

    case 1:
        p("dime la base\n");
        s("%f", &base);
        p("dame la altura\n");
        s("%f", &altura);
        operacion= (base*altura)/2;
        break;

    case 2:
        p("dime la base\n");
        s("%f", &base);
        p("dame la altura\n");
        s("%f", &altura);
        operacion= base*altura;
        break;

    case 3:
        p("dime la base\n");
        s("%f", &base);
        p("dame la altura\n");
        s("%f", &altura);
        operacion= base*altura;
        break;

    case 4:
        p("dame el radio\n");
        s("%i", &radio);
        operacion= radio*radio*pi;
        break;

    case 5:
        p("introduce el lado\n");
        s("%f", &lado1);
        p("Dime la medida del apotema\n");
        s("%f", &apotema);
        operacion= (5*lado1*apotema)/2;
        break;

        }
}
p("El resultado es: %.2f\n", operacion);
}
int horoscopoCPCR(int year, int age){
    age=ACTUAL-year;
    return (age);
}
int mesesCPCR(int mes,int dia,int year,int age){

    p("Seleccina el mes en que naciste:\n");
    p("1.enero\n2.Febrero\n3.Marzo\n4.Abril\n5.Mayo\n");
    p("6.junio\n7.Julio\n8. Agosto\n9.Septiembre\n10.Octubre\n11.Noviembre\n12.Diciembre\n");
    s("%i", &mes);

     switch(mes){
case 1:
    if( (mes==1 && dia>=10) || (mes==2 && dia <=6))
    p("Eres mono\n");
    break;
case 2:
    if( (mes==2 && dia>=7) || (mes==3 && dia <=6))
    p("alcon\n");
    break;
case 3:
    if( (mes==3 && dia>=7) || (mes==4 && dia <=3))
    p("Jaguar\n");
    break;
case 4:
    if( (mes==4 && dia>=4) || (mes==5 && dia <=1))
    p("zorro\n");
    break;
case 5:
    if( (mes==5 && dia>=2) || (mes== 5&& dia <=29))
    p("Serpiente\n");
    break;
case 6:
    if( (mes==5 && dia>=30) || (mes==6 && dia <=26))
    p("Ardilla\n");
    break;
case 7:
    if( (mes==6 && dia>=27) || (mes==7 && dia <=25))
    p("Tortuga\n");
    break;
case 8:
    if( (mes==7 && dia>=26) || (mes==8 && dia <=22))
    p("Murcielago\n");
    break;
case 9:
    if( (mes==8 && dia>=23) || (mes==9 && dia <=19))
    p("Escorpion\n");
    break;
case 10:
    if( (mes==9 && dia>=20) || (mes==10 && dia <=17))
    p("Venado\n");
    break;
case 11:
    if( (mes==10 && dia>=18) || (mes==11 && dia <=14))
    p("Lechuza\n");
    break;
case 12:
    if((mes==11 && dia>=15) || (mes==12 && dia <=12))
    p("Pavo real\n");
    break;

    }
     if( (mes==12 && dia>=13) || (mes==1 && dia <=9))
        p("Lagarto\n");

    if(year%4== 0)
        p("Naciste en a%co bisiesto\n",164);
         age= ACTUAL - year;
    if (mes <=MESACTUAL)
        p("\nTienes %d a%cos\n",age,164);
    if(mes > MESACTUAL)
        p("\nTienes %d a%cos\n",age-1,164);
}
//Repetitiva For case 1
void factorialSPSR(){

        int i,numero,fact;
        p("Introduce el numero al que deseas sacar su factorial: ");
	    s("%i",&numero);

        fact=1;
	    for (i=1;i<=numero;i++){
	        fact*=i;
	    }
	    p("\n el factorial del numero %i es: %i",numero,fact);
}
void sumaparesSPSR(){
    int i,numero,a;
      p("Introduce tu numero:");
	  s("%d",&numero);

	      	a=0;
	       	for(i=2;i<=numero;i+=2)
			   {
	          	p("%d%c",i,32);
	          	a+= i;
			}
	   	  	p("\nLa suma de los numeros pares hasta %d es= %d\n",numero,a);
}
//Repetitiva for case 2
void factorialCPSR(int numero,int fact){

        int i;
        p("Introduce el numero al que deseas sacar su factorial: ");
	    s("%i",&numero);

        fact=1;
	    for (i=1;i<=numero;i++){
	        fact*=i;
	    }
	    p("\n el factorial del numero %i es: %i",numero,fact);
}
void sumaparesCPSR(int numero,int a){
    int i;
      p("Introduce tu numero:");
	  s("%d",&numero);

	      	a=0;
	       	for(i=2;i<=numero;i+=2)
			   {
	          	p("%d%c",i,32);
	          	a+= i;
			}
	   	  	p("\nLa suma de los numeros pares hasta %d es= %d\n",numero,a);
}

//Repetitiva For case 3
int factorialSPCR(){

        int i,numero,fact;
        p("Introduce el numero al que deseas sacar su factorial: ");
	    s("%i",&numero);

        fact=1;
	    for (i=1;i<=numero;i++){
	        fact*=i;
	    }
	    p("\n el factorial del numero %i es: %i",numero,fact);
	    return fact;
}
int sumaparesSPCR(){
    int i,numero,a;
      p("Introduce tu numero:");
	  s("%d",&numero);

	      	a=0;
	       	for(i=2;i<=numero;i+=2)
			   {
	          	p("%d%c",i,32);
	          	a+= i;
			}
	   	  	p("\nLa suma de los numeros pares hasta %d es= %d\n",numero,a);
}
//Repetitiva For case 4
int factorialCPCR(int numero,int fact){

        int i;
        p("Introduce el numero al que deseas sacar su factorial: ");
	    s("%i",&numero);

        fact=1;
	    for (i=1;i<=numero;i++){
	        fact*=i;
	    }
	    p("\n el factorial del numero %i es: %i",numero,fact);
	    return fact;
}
int sumaparesCPCR(int numero,int a){
    int i;
      p("Introduce tu numero:");
	  s("%d",&numero);

	      	a=0;
	       	for(i=2;i<=numero;i+=2)
			   {
	          	p("%d%c",i,32);
	          	a+= i;
			}
	   	  	p("\nLa suma de los numeros pares hasta %d es= %d\n",numero,a);
    return a;
}
//Repetitiva While case 1
void cuboSPSR(){
    long int  cua, cub, numero;
    int i;

        p("Ingrese el valor maximo de la tabla: ");
		s("%i", &numero);

				i=1;
				while (i<=numero)
					{
						cua=i*i;
						if(cua>=50)
							p("%i es mayor a 50. \n", cua);
						cub=i*i*i;
						if(cub>=75)
							p("%i es mayor a 75. \n", cub);
						p("%i\t%i\t%i \n", i, cua, cub);
						i++;
					}
    }
void digitosSPSR(){
        int i,numero;
        p("Ingresa un numero para saber el numero de digitos que contiene: \n");
 		s("%i", &numero);

					i=1;
					while(numero/10>0)
					{
						numero=numero/10;
						i++;
					}
					p("Tiene %i digitos \n",i);
    return i;
}
//Repetitiva While case 2
void cuboCPSR(int cua,int cub,int numero){
    int i;

        p("Ingrese el valor maximo de la tabla: ");
		s("%i", &numero);

				i=1;
				while (i<=numero)
					{
						cua=i*i;
						if(cua>=50)
							p("%i es mayor a 50. \n", cua);
						cub=i*i*i;
						if(cub>=75)
							p("%i es mayor a 75. \n", cub);
						p("%i\t%i\t%i \n", i, cua, cub);
						i++;
					}
    }
void digitosCPSR(int numero){
        int i;
        p("Ingresa un numero para saber el numero de digitos que contiene: \n");
 		s("%i", &numero);

					i=1;
					while(numero/10>0)
					{
						numero=numero/10;
						i++;
					}
					p("Tiene %i digitos \n",i);
}
//Repetitiva while case 3
int cuboSPCR(){
    long int cua,cub,numero;
    int i;

        p("Ingrese el valor maximo de la tabla: ");
		s("%i", &numero);

				i=1;
				while (i<=numero)
					{
						cua=i*i;
						if(cua>=50)
							p("%i es mayor a 50. \n", cua);
						cub=i*i*i;
						if(cub>=75)
							p("%i es mayor a 75. \n", cub);
						p("%i\t%i\t%i \n", i, cua, cub);
						i++;
					}
        return 0;
    }
int digitosSPCR(){
        int i,numero;
        p("Ingresa un numero para saber el numero de digitos que contiene: \n");
 		s("%i", &numero);

					i=1;
					while(numero/10>0)
					{
						numero=numero/10;
						i++;
					}
					p("Tiene %i digitos \n",i);
    return i;
}
//Repetitiva While case 4
int cuboCPCR(int cua,int cub,int numero){
    int i;

        p("Ingrese el valor maximo de la tabla: ");
		s("%i", &numero);

				i=1;
				while (i<=numero)
					{
						cua=i*i;
						if(cua>=50)
							p("%i es mayor a 50. \n", cua);
						cub=i*i*i;
						if(cub>=75)
							p("%i es mayor a 75. \n", cub);
						p("%i\t%i\t%i \n", i, cua, cub);
						i++;
					}
            return cub,cua;
    }
int digitosCPCR(int numero){
        int i;
        p("Ingresa un numero para saber el numero de digitos que contiene: \n");
 		s("%i", &numero);

					i=1;
					while(numero/10>0)
					{
						numero=numero/10;
						i++;
					}
					p("Tiene %i digitos \n",i);
    return i;
}
//Repetitiva Do while case 1
void abecedarioSPSR(){
        char h;
            h='a';
            do{
            p("%c ",h);
            h++;

        }
        while(h<='z');
}
void tablasSPSR(){
         int numero,i,a;
        p("Ingrese el numero: ");
        s("%d", &numero);

        a=0;
        i=1;
        do
            {
        a=i*numero;
        i++; p("\n%i x %i = %i",numero,i,a);
        }
        while(i<=10);
    }

// Repetitiva Do while case 2
void abecedarioCPSR(char h){
        h='a';
            do{
            p("%c ",h);
            h++;

        }
        while(h<='z');
}
void tablasCPSR(int numero,int a,int i){

        p("Ingrese el numero: ");
        s("%d", &numero);

        a=0;
        i=1;
        do
            {
        a=i*numero;
        i++; p("\n%i x %i = %i",numero,i,a);
        }
        while(i<=10);
    }
//Repetitiva Do while case 3
int abecedarioSPCR(){
        char h;
            h='a';
            do{
            p("%c ",h);
            h++;

        }
        while(h<='z');
return h;
}
int tablasSPCR(){
         int numero,i,a;
        p("Ingrese el numero: ");
        s("%d", &numero);

        a=0;
        i=1;
        do
            {
        a=i*numero;
        i++; p("\n%i x %i = %i",numero,i,a);
        }
        while(i<=10);
    }
//Repetitiva Do while case 4
int abecedarioCPCR(char h){
        h='a';
            do{
            p("%c ",h);
            h++;

        }
        while(h<='z');
return h;
}
int tablasCPCR(int numero,int a,int i){

        p("Ingrese el numero: ");
        s("%d", &numero);

        a=0;
        i=1;
        do
            {
        a=i*numero;
        i++; p("\n%i x %i = %i",numero,i,a);
        }
        while(i<=10);
return 0;
    }
//Arreglos Unibi case 1
void numeroparSPSR(){

        int i,anp=0,sump=0,anip=0,sumip=0,anpr=0,lista[MAX],numero;
        anp=0;
        sump=0;
        anip=0;
        sumip=0;
        anpr=0;
        p("Hasta que numero desea que la lista se extienda: ");
	   	s("%d",&numero);


				for (i=0;i<numero;i++){
						p("Tecle el elemento [%d] de la lista: \n", i);
						s("%d", &lista[i]);
				}
				for(i=0; i<numero; i++){
					if(lista[i]%2==0){
						sump=sump+lista[i];
						anp++;
					}
					else{
						sumip=sumip+lista[i];
						anip++;
					}
					if((((lista[i]%2!=0)&&(lista[i]%3!=0))||lista[i]==2||lista[i]==3)&&lista[i]!=1){
						p("El valor en la posicion [%d] es un numero primo. \n", i);
						anpr++;
					}
					else
						p("El valor en la posicion [%d] no es un numero primo. \n", i);
				}
				p("\n");
				p("La cantidad de numero pares es %d, la suma de estos numeros pares es %d \n", anp, sump);
				p("La cantidad de numero impares es %d, la suma de estos numeros impares es %d \n", anip, sumip);
				p("La cantidad de numeros primos es %d \n", anpr);
}
void SumaListaSPSR(){

        int lista[MAX];
        int i,j,k;
        int exten;

    	p("Hasta que numero quiere que se extienda la lista?: ");
	   	s("%d",&exten);

                p("Primera lista. \n");
				for(i=0;i<exten;i++){
					p("Tecle el elemento de la lista [%d]: ", i);
					s("%d", &lista[i]);
				}
				for(i=0;i<exten;i++){
					p("%d\t", lista [i]);
				}
				p("\n");
				p("Segunda lista. \n");
				for(j=0;j<exten;j++){
					p("Tecle el elemento de la lista [%d]: ", j);
					s("%d", &lista[j]);
				}
				for(j=0;j<exten;j++){
					p("%d\t", lista [j]);
				}
				p("\n");
				p("Lista con la suma de las dos listas: \n");
				for (k=0;k<exten;k++){
					p("%d\t", lista[k]+lista[k] );
				}
}
//Arreglos Unibi case 2
void numeroparCPSR(int anp,int sump,int anip,int sumip,int anpr,int lista[MAX],int numero){

    int i;
        anp=0;
        sump=0;
        anip=0;
        sumip=0;
        anpr=0;
        p("Hasta que numero desea que la lista se extienda: ");
	   	s("%d",&numero);


				for (i=0;i<numero;i++){
						p("Tecle el elemento [%d] de la lista: \n", i);
						s("%d", &lista[i]);
				}
				for(i=0; i<numero; i++){
					if(lista[i]%2==0){
						sump=sump+lista[i];
						anp++;
					}
					else{
						sumip=sumip+lista[i];
						anip++;
					}
					if((((lista[i]%2!=0)&&(lista[i]%3!=0))||lista[i]==2||lista[i]==3)&&lista[i]!=1){
						p("El valor en la posicion [%d] es un numero primo. \n", i);
						anpr++;
					}
					else
						p("El valor en la posicion [%d] no es un numero primo. \n", i);
				}
				p("\n");
				p("La cantidad de numero pares es %d, la suma de estos numeros pares es %d \n", anp, sump);
				p("La cantidad de numero impares es %d, la suma de estos numeros impares es %d \n", anip, sumip);
				p("La cantidad de numeros primos es %d \n", anpr);
}
void SumaListaCPSR(int lista[MAX]){

        int i,j,k;
        int exten;

    	p("Hasta que numero quiere que se extienda la lista?: ");
	   	s("%d",&exten);

                p("Primera lista. \n");
				for(i=0;i<exten;i++){
					p("Tecle el elemento de la lista [%d]: ", i);
					s("%d", &lista[i]);
				}
				for(i=0;i<exten;i++){
					p("%d\t", lista [i]);
				}
				p("\n");
				p("Segunda lista. \n");
				for(j=0;j<exten;j++){
					p("Tecle el elemento de la lista [%d]: ", j);
					s("%d", &lista[j]);
				}
				for(j=0;j<exten;j++){
					p("%d\t", lista [j]);
				}
				p("\n");
				p("Lista con la suma de las dos listas: \n");
				for (k=0;k<exten;k++){
					p("%d\t", lista[k]+lista[k] );
				}
}
//Arreglos Unibi case 3
int numeroparSPCR(){

     int i,anp=0,sump=0,anip=0,sumip=0,anpr=0,lista[MAX],numero;

        p("Hasta que numero desea que la lista se extienda: ");
	   	s("%d",&numero);


				for (i=0;i<numero;i++){
						p("Tecle el elemento [%d] de la lista: \n", i);
						s("%d", &lista[i]);
				}
				for(i=0; i<numero; i++){
					if(lista[i]%2==0){
						sump=sump+lista[i];
						anp++;
					}
					else{
						sumip=sumip+lista[i];
						anip++;
					}
					if((((lista[i]%2!=0)&&(lista[i]%3!=0))||lista[i]==2||lista[i]==3)&&lista[i]!=1){
						p("El valor en la posicion [%d] es un numero primo. \n", i);
						anpr++;
					}
					else
						p("El valor en la posicion [%d] no es un numero primo. \n", i);
				}
				p("\n");
				p("La cantidad de numero pares es %d, la suma de estos numeros pares es %d \n", anp, sump);
				p("La cantidad de numero impares es %d, la suma de estos numeros impares es %d \n", anip, sumip);
				p("La cantidad de numeros primos es %d \n", anpr);
    return 0;
}
int SumaListaSPCR(){

        int lista[MAX];
        int i,j,k;
        int exten;

    	p("Hasta que numero quiere que se extienda la lista?: ");
	   	s("%d",&exten);

                p("Primera lista. \n");
				for(i=0;i<exten;i++){
					p("Tecle el elemento de la lista [%d]: ", i);
					s("%d", &lista[i]);
				}
				for(i=0;i<exten;i++){
					p("%d\t", lista [i]);
				}
				p("\n");
				p("Segunda lista. \n");
				for(j=0;j<exten;j++){
					p("Tecle el elemento de la lista [%d]: ", j);
					s("%d", &lista[j]);
				}
				for(j=0;j<exten;j++){
					p("%d\t", lista [j]);
				}
				p("\n");
				p("Lista con la suma de las dos listas: \n");
				for (k=0;k<exten;k++){
					p("%d\t", lista[k]+lista[k] );
				}
				return lista;
}
//Arreglos Unibi case 4
int numeroparCPCR(int anp,int sump,int anip,int sumip,int anpr,int lista[MAX],int numero){

    int i;
        anp=0;
        sump=0;
        anip=0;
        sumip=0;
        anpr=0;
        p("Hasta que numero desea que la lista se extienda: ");
	   	s("%d",&numero);


				for (i=0;i<numero;i++){
						p("Tecle el elemento [%d] de la lista: \n", i);
						s("%d", &lista[i]);
				}
				for(i=0; i<numero; i++){
					if(lista[i]%2==0){
						sump=sump+lista[i];
						anp++;
					}
					else{
						sumip=sumip+lista[i];
						anip++;
					}
					if((((lista[i]%2!=0)&&(lista[i]%3!=0))||lista[i]==2||lista[i]==3)&&lista[i]!=1){
						p("El valor en la posicion [%d] es un numero primo. \n", i);
						anpr++;
					}
					else
						p("El valor en la posicion [%d] no es un numero primo. \n", i);
				}
				p("\n");
				p("La cantidad de numero pares es %d, la suma de estos numeros pares es %d \n", anp, sump);
				p("La cantidad de numero impares es %d, la suma de estos numeros impares es %d \n", anip, sumip);
				p("La cantidad de numeros primos es %d \n", anpr);
    return 0;
}
int SumaListaCPCR(int lista[MAX]){

        int i,j,k;
        int exten;

    	p("Hasta que numero quiere que se extienda la lista?: ");
	   	s("%d",&exten);

                p("Primera lista. \n");
				for(i=0;i<exten;i++){
					p("Tecle el elemento de la lista [%d]: ", i);
					s("%d", &lista[i]);
				}
				for(i=0;i<exten;i++){
					p("%d\t", lista [i]);
				}
				p("\n");
				p("Segunda lista. \n");
				for(j=0;j<exten;j++){
					p("Tecle el elemento de la lista [%d]: ", j);
					s("%d", &lista[j]);
				}
				for(j=0;j<exten;j++){
					p("%d\t", lista [j]);
				}
				p("\n");
				p("Lista con la suma de las dos listas: \n");
				for (k=0;k<exten;k++){
					p("%d\t", lista[k]+lista[k] );
				}
				return lista;
}
//Arreglos Bidi case 1
void pizarronSPSR(){

    int i,j,c,f;
    p("Cuantas filas tendrá la matriz? ");
    s("%d",&f);
    p("Cuantas columnas tendrá la matriz? ");
    s("%d",&c);

    for(i=0;i<f;i++)
        for(j=0;j<c;j++){
            p("Teclea el elemento de la matriz [%d][%d]",i,j);
            s("%d",&tabla[i][j]);
        }

    for(i=0;i<f;i++){
        p("\n");
        for(j=0;j<c;j++)
            p("%i\t",tabla[i][j]);
    }
}
void valoresSPSR(){

    int filas, columnas;
    int x[MAX][MAX];
    int y[MAX][MAX];
    int i,j;


    p("Cuantas filas tiene tu tabla?");
    s("%d",&filas);
    p("Cuantas columnas tiene tu tabla?");
    s("%d",&columnas);
    p("Introduce los valores  de la matriz\n");

    for (i=0;i<filas;i++)
        for(j=0;j<columnas;j++){
        p("[%d,%d].-",i,j);
        s("%d", &x[i][j]);
        }
        p("Introduce los valores  de la matriz 2:\n");
    for (i=0;i<filas;i++)
        for(j=0;j<columnas;j++){
        p("[%d,%d].-",i,j);
        s("%d", &y[i][j]);
        }
    system("cls");
    p("Los elementos de la matriz 1 son\n");
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++)
            p("%d\t",x[i][j]);
        p("\n");
    }
    p("\n");

    p("Los elementos de la matriz 2 son\n");
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++)
            p("%d\t",y[i][j]);
        p("\n");
        }
        p("\n");

        p("La suma de tus matrices son:\n");
        for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++)
            p("%d\t",x[i][j]+y[i][j]);
        p("\n");
        }

}
//Arreglos Bidi case 2
pizarronCPSR(int tabla[MAX][MAX]){
     int i,j,c,f;

    p("Cuantas filas tendrá la matriz? ");
    s("%d",&f);
    p("Cuantas columnas tendrá la matriz? ");
    s("%d",&c);

    for(i=0;i<f;i++)
        for(j=0;j<c;j++){
            p("Teclea el elemento de la matriz [%d][%d]",i,j);
            s("%d",&tabla[i][j]);
        }

    for(i=0;i<f;i++){
        p("\n");
        for(j=0;j<c;j++)
            p("%i\t",tabla[i][j]);
    }
}
int valoresCPSR(int filas,int columnas,int x[MAX][MAX],int y[MAX][MAX]){

    int i,j;

    p("Cuantas filas tiene tu tabla?");
    s("%d",&filas);
    p("Cuantas columnas tiene tu tabla?");
    s("%d",&columnas);

    p("Introduce los valores  de la matriz\n");
    for (i=0;i<filas;i++)
        for(j=0;j<columnas;j++){
        p("[%d,%d].-",i,j);
        s("%d", &x[i][j]);
        }
        p("Introduce los valores  de la matriz 2:\n");
    for (i=0;i<filas;i++)
        for(j=0;j<columnas;j++){
        p("[%d,%d].-",i,j);
        s("%d", &y[i][j]);
        }
    system("cls");
    p("Los elementos de la matriz 1 son\n");
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++)
            p("%d\t",x[i][j]);
        p("\n");
    }
    p("\n");

    p("Los elementos de la matriz 2 son\n");
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++)
            p("%d\t",y[i][j]);
        p("\n");
        }
        p("\n");

        p("La suma de tus matrices son:\n");
        for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++)
            p("%d\t",x[i][j]+y[i][j]);
        p("\n");
        }
}
//Arreglos Bidi case 3
void pizarronSPCR(int tabla[MAX][MAX]){

    int i,j,c,f,ciclo;

    p("Cuantas filas tendrá la matriz? ");
    s("%d",&f);
    p("Cuantas columnas tendrá la matriz? ");
    s("%d",&c);

    for(i=0;i<f;i++)
        for(j=0;j<c;j++){
            p("Teclea el elemento de la matriz [%d][%d]",i,j);
            s("%d",&tabla[i][j]);
        }

    for(i=0;i<f;i++){
        p("\n");
        for(j=0;j<c;j++)
            p("%i\t",tabla[i][j]);
    }
    return tabla;
}
int valoresSPCR(){

    int filas, columnas;
    int x[MAX][MAX];
    int y[MAX][MAX];
    int i,j;

    p("Cuantas filas tiene tu tabla?");
    s("%d",&filas);
    p("Cuantas columnas tiene tu tabla?");
    s("%d",&columnas);

    p("Introduce los valores  de la matriz\n");
    for (i=0;i<filas;i++)
        for(j=0;j<columnas;j++){
        p("[%d,%d].-",i,j);
        s("%d", &x[i][j]);
        }
        p("Introduce los valores  de la matriz 2:\n");
    for (i=0;i<filas;i++)
        for(j=0;j<columnas;j++){
        p("[%d,%d].-",i,j);
        s("%d", &y[i][j]);
        }
    system("cls");
    p("Los elementos de la matriz 1 son\n");
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++)
            p("%d\t",x[i][j]);
        p("\n");
    }
    p("\n");

    p("Los elementos de la matriz 2 son\n");
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++)
            p("%d\t",y[i][j]);
        p("\n");
        }
        p("\n");

        p("La suma de tus matrices son:\n");
        for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++)
            p("%d\t",x[i][j]+y[i][j]);
        p("\n");
        }
 return 0;
}
//Arreglos Bidi case 4
int pizarronCPCR(int tabla[MAX][MAX]){
     int i,j,c,f;

    p("Cuantas filas tendrá la matriz? ");
    s("%d",&f);
    p("Cuantas columnas tendrá la matriz? ");
    s("%d",&c);

    for(i=0;i<f;i++)
        for(j=0;j<c;j++){
            p("Teclea el elemento de la matriz [%d][%d]",i,j);
            s("%d",&tabla[i][j]);
        }

    for(i=0;i<f;i++){
        p("\n");
        for(j=0;j<c;j++)
            p("%i\t",tabla[i][j]);
    }
    return tabla;
}
int valoresCPCR(int filas,int columnas,int x[MAX][MAX],int y[MAX][MAX]){

    int i,j;

    p("Cuantas filas tiene tu tabla?");
    s("%d",&filas);
    p("Cuantas columnas tiene tu tabla?");
    s("%d",&columnas);

    p("Introduce los valores  de la matriz\n");
    for (i=0;i<filas;i++)
        for(j=0;j<columnas;j++){
        p("[%d,%d].-",i,j);
        s("%d", &x[i][j]);
        }
        p("Introduce los valores  de la matriz 2:\n");
    for (i=0;i<filas;i++)
        for(j=0;j<columnas;j++){
        p("[%d,%d].-",i,j);
        s("%d", &y[i][j]);
        }
    system("cls");
    p("Los elementos de la matriz 1 son\n");
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++)
            p("%d\t",x[i][j]);
        p("\n");
    }
    p("\n");

    p("Los elementos de la matriz 2 son\n");
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++)
            p("%d\t",y[i][j]);
        p("\n");
        }
        p("\n");

        p("La suma de tus matrices son:\n");
        for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++)
            p("%d\t",x[i][j]+y[i][j]);
        p("\n");
        }
 return 0;
}
//Registro case 1
void datos2(){

    int i,n;
    p("Cuantas nominas necesita? ");
    s("%d",&n);

    for(i=0;i<n;i++){
    p("nombre del trabajador: ");
    fflush(stdin);gets(trabajador[i].nombre);
    p("Departamento asignado: ");
    fflush(stdin);gets(trabajador[i].departamento);
    p("Puesto que ocupa: ");
    fflush(stdin);gets(trabajador[i].puesto);
}
}
void pagos(){
    int i,n;

    for(i=0;i<n;i++){
    p("Costo por hora: ");
    s("%f",&trabajador[i].Ch),
    p("Horas trabajadas: ");
    s("%d",&trabajador[i].horasT);
    }
    for(i=0;i<n;i++){
    trabajador[i].imp=.30;
    trabajador[i].Sb= trabajador[i].Ch*trabajador[i].horasT;
    trabajador[i].Totalp=trabajador[i].Sb*trabajador[i].imp;
    }

}
 void nomina(){
     int i,n;

    for(i=0;i<n;i++){
    p("\nNOMINA\n");
    p("Nombre: %s\n",trabajador[i].nombre);
    p("Departamento: %s\n",trabajador[i].departamento);
    p("Puesto ocupado: %s\n",trabajador[i] .puesto);
    p("Horas trabajadas: %d\n",trabajador[i].horasT);
    p("Costo por hora: %.2f\n",trabajador[i].Ch);
    p("Pago total: %.2f\n",trabajador[i].Totalp);
    }

    }
//Registro case 2
void pagosCPSR(int n){
    int i;

    for(i=0;i<n;i++){
    p("nombre del trabajador: ");
    fflush(stdin);gets(trabajador[i].nombre);
    p("Departamento asignado: ");
    fflush(stdin);gets(trabajador[i].departamento);
    p("Puesto que ocupa: ");
    fflush(stdin);gets(trabajador[i].puesto);

    p("Costo por hora: ");
    s("%f",&trabajador[i].Ch),
    p("Horas trabajadas: ");
    s("%d",&trabajador[i].horasT);
for(i=0;i<n;i++){
    trabajador[i].imp=.30;
    trabajador[i].Sb= trabajador[i].Ch*trabajador[i].horasT;
    trabajador[i].Totalp=trabajador[i].Sb*trabajador[i].imp;
    }
}
}
 void nominaCPSR(int n){
     int i;

    for(i=0;i<n;i++){
    p("\nNOMINA\n");
    p("Nombre: %s\n",trabajador[i].nombre);
    p("Departamento: %s\n",trabajador[i].departamento);
    p("Puesto ocupado: %s\n",trabajador[i] .puesto);
    p("Horas trabajadas: %d\n",trabajador[i].horasT);
    p("Costo por hora: %.2f\n",trabajador[i].Ch);
    p("Pago total: %.2f\n",trabajador[i].Totalp);
    }
    }
//Registro case 3
void datosSPCR(){

    int i,n;
    p("Cuantas nominas necesita? ");
    s("%d",&n);

    for(i=0;i<n;i++){
    p("nombre del trabajador: ");
    fflush(stdin);gets(trabajador[i].nombre);
    p("Departamento asignado: ");
    fflush(stdin);gets(trabajador[i].departamento);
    p("Puesto que ocupa: ");
    fflush(stdin);gets(trabajador[i].puesto);
}
}
float pagosSPCR(){
    int i,n;

    for(i=0;i<n;i++){
    p("Costo por hora: ");
    s("%f",&trabajador[i].Ch),
    p("Horas trabajadas: ");
    s("%d",&trabajador[i].horasT);
    }
    for(i=0;i<n;i++){
    trabajador[i].imp=.30;
    trabajador[i].Sb= trabajador[i].Ch*trabajador[i].horasT;
    trabajador[i].Totalp=trabajador[i].Sb*trabajador[i].imp;
    }
 return 0;
}
 float nominaSPCR(){
     int i,n;

    for(i=0;i<n;i++){
    p("\nNOMINA\n");
    p("Nombre: %s\n",trabajador[i].nombre);
    p("Departamento: %s\n",trabajador[i].departamento);
    p("Puesto ocupado: %s\n",trabajador[i] .puesto);
    p("Horas trabajadas: %d\n",trabajador[i].horasT);
    p("Costo por hora: %.2f\n",trabajador[i].Ch);
    p("Pago total: %.2f\n",trabajador[i].Totalp);
    }
return 0;
    }

//Registro case 4
void datosCPSCR(int n){
    int i;
    p("Cuantas nominas necesita? ");
    s("%d",&n);

    for(i=0;i<n;i++){
    p("nombre del trabajador: ");
    fflush(stdin);gets(trabajador[i].nombre);
    p("Departamento asignado: ");
    fflush(stdin);gets(trabajador[i].departamento);
    p("Puesto que ocupa: ");
    fflush(stdin);gets(trabajador[i].puesto);
}
}
float pagosCPCR(int n){
    int i;
    for(i=0;i<n;i++){
    p("Costo por hora: ");
    s("%f",&trabajador[i].Ch),
    p("Horas trabajadas: ");
    s("%d",&trabajador[i].horasT);
    }
for(i=0;i<n;i++){
    trabajador[i].imp=.30;
    trabajador[i].Sb= trabajador[i].Ch*trabajador[i].horasT;
    trabajador[i].Totalp=trabajador[i].Sb*trabajador[i].imp;
    }
return 0;
}

 float nominaCPCR(int n){
     int i;
    for(i=0;i<n;i++){
    p("\nNOMINA\n");
    p("Nombre: %s\n",trabajador[i].nombre);
    p("Departamento: %s\n",trabajador[i].departamento);
    p("Puesto ocupado: %s\n",trabajador[i] .puesto);
    p("Horas trabajadas: %d\n",trabajador[i].horasT);
    p("Costo por hora: %.2f\n",trabajador[i].Ch);
    p("Pago total: %.2f\n",trabajador[i].Totalp);
    }
    return 0;

}
