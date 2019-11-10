#include<stdio.h>
#include<string.h>

/*
	David Villanueva Cazares
	09/ Noviembre/2019
	grupo 212 
	Viernes de 7 a 9 am
	1884086
*/
/*Actividad 1*/
typedef struct
{
	char name[15];
	int data;
}pictures;
/*se declaro la funcion para llamar como aputador a una estructura de tipo pictures*/
void lectura(pictures *p1); 



/**Actividad 2**/
struct c
{
	int latitud;
	int longitud;
}p[4];


void main(void)
{
	/**Actividad 1**/
	pictures p0 ={"hola que hace", 110111}, p1;
	/*se manda hablar a la funcion de lectura con un parametro que en este caso es una estructura de tipo pictures*/
	lectura(&p1);
	
	printf("\nDatos de la fotografia 1:\n");
	printf("\n%s \n%d", p0.name, p0.data);
	printf("\nDatos de la fotografia 2:\n");
	/*aqui se observa que el apuntador de la funcion si cambia los datos*/
	printf("\n%s \n%d", p1.name, p1.data);
	
	
	
	/**Actividad 2**/
	
	p[0].latitud=200;
	p[0].longitud=300;
	p[1].latitud=400;
	p[1].longitud=100;
	p[2].latitud=100;
	p[2].longitud=400;
	p[3].latitud=300;
	p[3].longitud=200;
	
	int i=0 ,i1, i2, i3, i4;
	/**Impresion normal**/
	for(i=0;i<4;i++)
	{
		printf("%d\n", p[i].latitud);
		printf("%d\n", p[i].longitud);
	}
	/**Creciente latitud**/
	int n=0, n1=0;
	n=p[0].latitud;
	n1=p[0].latitud;
	for(i=0;i<4;i++)
	{
		if(p[i].latitud>n)
		{
			n=p[i].latitud;
			i1=i;
		}
		
		if(p[i].latitud<n1)
		{
			n1=p[i].latitud;
			i2=i;
		}

	}
	int m1=0, m2=0;
	m1=n;
	for(i=0;i<4;i++)
	{
		
		if(p[i].latitud<n && p[i].latitud>n1)
		{
			if(m1>p[i].latitud)
			{
				m1=p[i].latitud;
				i3=i+1;
			}
			else
			{
				m2=p[i].latitud;
				i3=i;
			}
		}
	}
	printf("Forma creciente de latitud \n%d %d \n%d %d\n %d %d\n %d %d\n", n, p[i1].longitud, m2, p[i3].longitud, m1, p[i4].longitud, n1, p[i2].longitud);
	
}

void lectura(pictures *p1)
{
	/*aqui solo se leen los datos para modificar la estructura*/
	fflush(stdin);
	printf("\nIngrese el nombre de la foto\n:");
	gets(p1->name);
	fflush(stdin);
	printf("\nIngreseq la fecha en la que se tomo (ddmmaa)\n:");
	scanf("%d", &p1->data);
}
