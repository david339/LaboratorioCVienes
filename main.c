#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* David Villanueva Cazares 
1884086
Viernes de 7 a 9
11 de oct 2019
Practica 10*/

int main() {
	
	/**********************Actividad 1*****************************/
	char a[30], b[30];
    int i, j;
    int palindromo = 1;
    printf("Inngrese una cadena: \n");
    fflush(stdout);
    gets(a);
    j=strlen(a)-1;
    
	for(i=0; i<strlen(a)/2; i++, j--) 
	{
        printf("\nComprobando %c==%c\n", *(a+i), *(a+j));
        if (*(a+i)!=*(a+j)) 
		{
            palindromo = 0;
            break;
        }
    }
    if (palindromo)
    {
    	printf("\nEs un palíndromo\n");
	}
        
    else
    {
    	printf("\nNo es un palindromo\n");
	}
        
        
    /**********************Actividad 2**************************************/    

	return 0;
}
