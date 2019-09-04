#include <stdio.h>
#include <stdlib.h>
#include <String.h>

/*Autor: David Villanueva Cazares
Fecha: 04/09/2019 
Grupo: 212
Horario Viernes de 7 am a 9 am
Matricula:  1884086 */

int main() {
	
	/*******************************************Actividad 1************************************************************************/
	int cal=0;
	printf("\nIngrese la nota del alumno:	\n");
	scanf("%d", &cal);
	/*Se verifica la primera validacion*/
	if(cal>=5 && cal<=10)
	{
		printf("\nApto para Aprovar\n");
	}
	else
	{
		/*Se verifica la segunda validacion*/
		if(cal>=0 && cal<5)
		{
			printf("\nNo Apto, reprobara \n");
		}
		else
		{
			/*Sino cumple con ninguna indicada se marca como opcion no valida*/
			printf("\nOpcion no valida intente de nuevo...\n");
		}
	}
	getch(); /*Este codigo indica una pausa */
	system("cls"); /* Este codigo indica una limpieza de pantalla*/
	/*************************************************************Actividad 2************************************************************/
	
	/*Se declaran variables de tipo char para poder imprimir la cadena a la hora de indicar cual dia escojio*/
	char l[]="Lunes";
	char m[]="Martes";
	char mi[]="Miercoles"; 
	char j[]="Jueves";
	char v[]="Viernes";
	char s[]="Sabado";
	char d[]="Domingo";
	int op=0;
	/*Se pide y lee el dia indicado*/
	printf("\n\nIngrese el dia en el que se enucentra indicando del 1 al 7:\n");
	scanf("%d", &op);
	/*Diferentes opciones de los dias*/
	switch(op)
	{
		case 1:
			printf("\nEl dia que selecciono fue el : %s \n\n", l);
		break;
		case 2:
			printf("\n\nEl dia que selecciono fue el : %s \n\n", m);
		break;
		case 3:
			printf("\n\nEl dia que selecciono fue el : %s \n\n", mi);
		break;
		case 4:
			printf("\n\nEl dia que selecciono fue el : %s \n\n", j);
		break;
		case 5:
			printf("\n\nEl dia que selecciono fue el : %s \n\n", v);
		break;
		case 6:
			printf("\n\nEl dia que selecciono fue el : %s \n\n", s);
		break;
		case 7:
			printf("\n\nEl dia que selecciono fue el : %s \n\n", d);
		break;
		default:
			printf("\a \nOpcion no valida intente de nuevo...\n");
		break;
	}
	
	getch(); /*Este codigo indica una pausa */
	/****************************************************************Actividad Extra***************************************************************/
	system("cls"); /* Este codigo indica una limpieza de pantalla*/
	int o=0;
	/*Menu que despliega las opciones*/
	printf("\n Menu\n\n");
	printf("\nElija la opcion que desee realizar:\n\n");
	printf("\n1.- Ventas\n");
	printf("\n2.- Inventarios\n");
	printf("\n3.- Bajas\n");
	printf("\n4.- Altas\n");
	printf("\n5.- Asistencias\n");
	printf("\n6.- Proveedores\n");
	printf("\n7.- Punto de Venta\n");
	scanf("%d", &o);
	/*Opciones que se desean ver*/
	switch(o)
	{
		case 1:
			printf("\nUsted elijio la opcion de : Ventas\n");
		break;
		case 2:
			printf("\nUsted elijo la opcion de: Inventario\n");
		break;
		case 3:
			printf("\nUsted elijo la opcion de: Bajas\n");
		break;
		case 4:
			printf("\nUsted elijio la opcion de: Altas\n");	
		break;
		case 5:
			printf("\nUsted elijio la opcion de: Asistencias\n");
		break;
		case 6:
			printf("\nUsted elijio la opcion de: Proveedores\n");	
		break;
		case 7:
			printf("\nUsted elijio la opcion de: Punto de Venta\n");
		break;
		default:
			printf("\n\a Opcion no valida intete de nuevo ...\n");
		break;
	}
	
	return 0;
}
