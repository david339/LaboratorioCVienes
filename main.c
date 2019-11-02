#include<stdio.h>
#include<string.h>

/*David Villanueva Cazares
1/noviembre/2019
grupo: 212
horario: Viernes 7 a 9 am 
1884086

*/
/***********************************************************Actividad 1***************************************************************************/
int cadena(char *);
/***********************************************************Actividad 2***************************************************************************/
int suma(int *, int *);

int main()
{
	char c[50];
	int r;
	printf("\nPrograma 1\n\n");
	printf("Ingrese una cadena de caracteres\n:");
	gets(c);
	r = cadena(c);
	
	printf("\nLa cantidad de vocales son %d \n\n", r);
	
	system("pause");
	
	printf("\n\nPrograma 2\n\n");
	int n1=0, n2=0, s=0;
	printf("\nIngrese un numero entero\n:");
	scanf("%d", &n1);
	printf("\nIngrese un segundo numero entero\n:");
	scanf("%d", &n2);
	
	s= suma(&n1, &n2);
	printf("\nLa suma de los numeros es de %d", s);
}

int suma(int *n1, int *n2)
{
	int s1=0;
	s1= *n1+ *n2;
	return (s1);
}

int cadena(char *c)
{
	int i=0, r=0;
	while(c[i]!='\0')
	{
		if(c[i] == 'a' || c[i]=='e' || c[i]=='i' || c[i]== 'o' || c[i]=='u')
		{
			r++;
		}
		i++;
	}
	
	
	return (r);	
}

