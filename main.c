#include <stdio.h>
#include <stdlib.h>

/* David Villanueva Cazares
	4 de Octubre del 2019
	Grupo: 212
	Horario: 7 a 9 am
	Mat. 1884086
	Programa original*/
	
	
	/*¿Cuantos elementos contiene un array multidimensional? en este caso 60 ya que se multiplica la dimension de las dos ultimas casillas
	despues se multiplica la tercera, esto con el fin de entender que nuestra primera lista contendra una cantidad de 20 elementos y
	despues cada primer casilla representa una lista estas se multiplican por los elementos generados en cada lisa
	
	¿Que ocurre si intentamos mostrar por pantalla un valor con indice que no esta definido para ese array multidimensional?
	Imprime como vacia o 0 */
/***********************************************************Actividad 1****************************************************************/
int main() {
	int VEOE[6][10][2];
	int  i=0, j=0, z=0;
	int b=1;
	for(i=0;i<6;i++)
	{
		printf("\nEdificio %d\n", (i+1));
		printf("\nEmpleado \t    Oficina\n");
		for(j=0;j<10;j++)
		{
			for(z=0;z<2;z++)
			{
				VEOE[i][j][z]= b;
				
				if(i==3 && j==7 && z==1)
				{
					VEOE[i][j][z]= 4244;
					
				}
				printf("%d\t\t\t", VEOE[i][j][z]);
			}
			printf("\n");
		}
		printf("\n\n\n");
	}
	
	printf("\nEl empleado 8 de la oficina 2 en el edificio 4 vendio %d \n: %d", VEOE[3][7][1]);
	
	/*********************************************************************Actividad 2**********************************************************/
	i=0;
	j=0;
	z=0;
	
	for(i=0;i<6;i++)
	{
		printf("\nEdificio %d\n", (i+1));
		printf("\nEmpleado \t    Oficina\n");
		for(j=0;j<10;j++)
		{
			for(z=0;z<2;z++)
			{
				VEOE[i][j][z]= b+10;
				if(i==3 && j==7 && z==1)
				{
					VEOE[i][j][z]= 4244;
				}
				printf("%d\t\t\t", VEOE[i][j][z]);
			}
			printf("\n");
		}
		printf("\n\n\n");
	}
	printf("\nEl empleado 8 de la oficina 2 en el edificio 4 vendio %d \n: %d", VEOE[3][7][1]);
	printf("\n%d", VEOE[9][3][1]);/*Es verifico la pregunta*/
	return 0;
}
