#include <stdio.h>
#include <stdlib.h>

/* David Villanueva Cazares
	4 de Octubre del 2019
	Grupo: 212
	Horario: 7 a 9 am
	Mat. 1884086*/

int main() {
	int VEOE[6][10][2];
	int  i=0, j=0, z=0;
	for(i=0;i<6;i++)
	{
		for(j=0;j<10;j++)
		{
			for(z=0;z<2;z++)
			{
				printf("\nIngrese el valor de la casilla VEOE[%d][%d][%d]\n:", (i+1), (j+1), (z+1));
				scanf("%d", &VEOE[i][j][z]);
				
				if(i==3 && j==7 && z==1)
				{
					VEOE[i][j][z]= 4244;
				}
			}
		}
	}
	i=0;
	j=0;
	z=0;
	system("cls");
	for(i=0;i<6;i++)
	{
		for(j=0;j<10;j++)
		{
			for(z=0;z<2;z++)
			{
				printf("%d\t", VEOE[i][j][z]);
				
			}
			printf("\n");
		}
		printf("\n\n\n");
	}
	printf("\nEl valor de la casilla [4][8][2] es igual a\n: %d", VEOE[3][7][1]);
	return 0;
}
