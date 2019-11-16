#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<locale.h>

/*
	David Villanueva Cazares
	15 de Noviembre 2019
	212
	Viernes 7 a 9 am
	1884086
*/

int main()
{
	/**********************Actividad 1******************************/
	char frase[50], cad;
	int k=0, i=0, j=0, lon=0;
	FILE *ar1;
	ar1=fopen("anexo1.txt" , "r");
	if(ar1!=NULL)
	{
		fgets(frase, 50, ar1);
		lon = strlen(frase);
		
		k=lon-1;
		while(i < (k))
		{
			cad=frase[i];
			frase[i]= frase[k];
			frase[k]=cad;
			i++;
			k--;
		}
		
		fclose(ar1);
	}
	
	FILE *ar2;
	ar2=fopen("anexo2.txt", "w");
	if(ar2!=NULL)
	{
		printf("\nDatos ingresados al archivo anexo2...\n");
		fputs(frase, ar2);
		
		fclose(ar2);
	}
	/****************************Actividad 2*******************************/
	
	int m1=0, m2=0, s=0;
	FILE *ar3;
	ar3=fopen("suma.txt", "r");
	if(ar3!=NULL)
	{
		
		fscanf(ar3,"%d", &m1);
		fscanf(ar3, "%d", &m2);
		s=m1+m2;
		fclose(ar3);
	}
	
	FILE *ar4;
	ar4=fopen("resultado.txt", "a");
	if(ar4!=NULL)
	{
		printf("\nDatos ingresados al archivo resultado ...\n");
		fprintf(ar3,"La suma de %d con %d es de : %d \n", m1, m2, s);
		
		fclose(ar4);
	}
	return 0;
}
