#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* David Villanueva Cazares  
20-Septiembre-2019
grupo  212
horario Viernes 7-9 am
mat. 1884086 
*/
int act1(void);
int act2(void);
int salir(void);

int main() {
	system("cls");
	int op=0;
	printf("\n\nPresione elijiendo la opcion correcta: \n\n1-. Actividad1\n2-. Actividad2\n3-. Salir\n");
	scanf("%d", &op);
	switch(op)
	{
		case 1:
			act1();
		break;
		case 2:
			act2();
		break;
		case 3:
			
		break;
		default:
			printf("\n\n\aOpcion no valida intente de nuevo...");
		break;
	}
	return 0;
}


int act1(void)
{
	/**************************************************************Actividad 1*************************************************************************************/
	float cal=0, prom=0, s=0;
	int c=0, x=0;
	for(c=1;c<=10;c++)
	{
		do
		{
		system("cls");
		cal=0;
		printf("\nIngrese la calificacion numero %d del alumno: \n", c);
		scanf("%f", &cal);
		if(cal>=0 && cal<=100)
		{
			s =s+cal;
			x=1;
		}
		else
		{
			printf("\n\n\aOpcion no valida intente de nuevo...");
			printf("\nPresione enter para continuar...");
			getch();
			x=0;
		}
		}while(x!=1);
	}
	system("cls");
	prom = s/10;
	if(prom>=70 && prom<=100)
	{
		printf("\n\nEl alumno esta aprobado :) ya que cuenta con un promedio de %.2f", prom);
	}
	else
	{
		printf("\n\nEl alumno esta reprobado :( ya que cuenta con un promedio de %.2f", prom);
	}
	printf("\n\nPresione enter para continuar...");
	getch();
	salir();
}
int act2(void)
{
		
	/**************************************************************************Actividad 2*********************************************************************/
	system("cls");
	int base=0, potencia=0, t=0, i=0, tot=0;
	printf("\nPrograma para calcular la potencia de un numero:\n\n");
	printf("\nIngrese la base del numero: ");
	scanf("%d", &base);
	printf("\nIngrese el numero de la potencia (o exponente a la cual se elevara el numero)");
	scanf("%d", &potencia);
	

	if(potencia==0)
	{
		t=1;
	}
	else
	{
		if(potencia==1)
		{
			t=base;
		}
		else
		{
			for(i=1;i<=potencia; i++)
			{
				t = pow(base,i);
				tot=tot+t;				
			}
		}
		
	}
	
	printf("El numero %d elevado a la %d tiene como resultado %d", base, potencia, t);
	printf("\n\nPresione enter para continuar...");
	getch();
	salir();
	
}


int salir(void)
{
	system("cls");
	int sal=0;
	printf("Deseas salir del programa?: 1-. Si 0.- No \n");
	scanf("%d", &sal);
	switch(sal)
	{
		case 0:
			main();
		break;
		case 1:
			
		break;
		default:
			printf("\nOpcion no validad...\n");
		break;
	}
}
