#include <stdio.h>
#include <stdlib.h>

/*David Villanueva Cazares
27/09/2019
212
Viernes de 7 a 9
1884086   */

int main() {
	/******************************************************Actividad1**************************************************************/
    printf("\nActividad 1 \n\n\n");
	int n[24];
	int c=0, i=0;

        for(c=0;c<24;c++)
        {
            printf("\nIngrese la cantidad de coches en la hora  %d :    ", c);
            scanf("%d", &n[c]);
            if(c==2||c==21)
            {
                n[c]=57;
            }
        }
        printf("\nLa cantidad de coches en la hora 2 es:   %d", n[1]);
        printf("\nLa cantidad de coches en la hora 21 es:  %d", n[20]);


    /******************************************************Actividad2****************************************************************/
    printf("\n\n\n Actividad 2 \n\n\n");
    int a=8, b=4, m=0, x=0;
    int r=0;
    r=a/b;

    for(x=0;x<24;x++)
    {
        if(x==r)
        {
            n[x]=57;
            m=x;
        }
    }
    printf("\nLa cantidad de coches en la posicion n[%d] es : %d", m, n[m]);
	return 0;
}
