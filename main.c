#include <stdio.h>
#include <stdlib.h>

/* */

int main() {
	/**************************************************************Actividad1***************************************************************************/
	int can=0, salida=0;
	float suma=0, n=0;
		do{
			system("cls");	
			printf("\nIntroduzca un numero: \n");
			scanf("%f", &n);
			printf("\n¿Desea introducir otro numero? \n1-. Si \n0-. No\n");
			scanf("%d", &salida);
			suma=suma+n;
			can = can+1;
		}while(salida!=0);
	printf("\nLa suma de los %d numeros es de %.2f", can, suma);
	printf("\nPresione enter para continuar ...");
	getch();	
	/***************************************************************Actividad2**************************************************************************/
		float num=0;
		
		do{
			system("cls");
			printf("\nIngrese un numero: \n");
			scanf("%f", &num);
			printf("\nUsted ingreso el numero %.2f\n", num);
			printf("\nPresione enter para continuar ...");
			getch();
		}while(num<=100);
		
	return 0;
}
