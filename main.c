#include <stdio.h>
#include <stdlib.h>

/* David Villanueva Cazares   1884086  30 de Agosto del 2019*/

int main() {
	/******************************************************************Actividad 1*****************************************************************************/
	float num1=0, num2=0;
	printf("\nIntroduzca un numero: \n");
	scanf("%f", &num1);
	printf("\nIntoduzca un segundo numero: \n");
	scanf("%f", &num2);
	if (num1>num2)
	{
		printf("\nEl numero mas grande es : %f\n", num1);
	}
	else
	{
		printf("\nEl numero mayor es : %.1f\n", num2);
	}
	if(num1==num2)
	{
		printf("\nLos numeros son iguales ...\n");
	}
	
	/*****************************************************************Actividad 2****************************************************************************/
	
	int A =5, B=3, C=-12;
	if(A>3)
	{
		printf("\nLa condicion es verdadera ya que %d es mayor a 3\n", A);
	}
	else
	{
		printf("\nLa condicion es falsa ya que %d es menor que 3\n", A);
	}
	if(A>C)
	{
		printf("\nLa condiciones es verdadera ya que A= %d y es mayor a C= %d\n", A, C);
	}
	else
	{
		printf("\nLa condicion es falsa ya que A= %d y es menor que a C= %d\n", A, C);
	}
	if(B!=C)
	{
		printf("\nLa condicion es verdadera ya que B= %d es diferente de C= %d \n", B, C);
	}
	else
	{
		printf("\nLa condicion es falsa ya que B= %d no es diferente de C= %d \n", B, C);	
	}
	if(A==3)
	{
		printf("\nLa condicion es verdadera ya que A= %d es igual a 3\n", A);
	}
	else
	{
		printf("\nLa condicion es falsa ya que A= %d es diferente de  3\n", A);
	}
	if(A*B==15)
	{
		printf("\nLa condicion es verdadera ya que la multiplicacion de \n A = %d \n por B= %d \n es %d y es igual a 15", A, B, (A*B));
	}
	else
	{
		printf("\nLa condicion es  verdades falsa ya que la multiplicacion de \n A = %d \n y B= %d \n es %d y no es igual a 15", A, B, (A*B));
	}
	if(C/B<A)
	{
		printf("\nLa condicion es verdadera ya que la division de \n C = %d \n entre B= %d \n es %d y es menor que A= %d", C, B, (C/B), A);
	}
	else
	{
		printf("\nLa condicion es falsa ya que la division de \n C = %d \n entre B= %d \n es %d y es mayor que A= %d", C, B, (C/B), A);
	}
	if(C/B == -10)
	{
		printf("\nLa condicion es verdadera ya que la division de \n C = %d \n entre B= %d \n es %d y es igual a -10", C, B, (C/B));
	}
	else
	{
		printf("\nLa condicion es falsa ya que la division de \n C = %d \n entre B= %d \n es %d y no es igual a -10", C, B, (C/B));
	}
	if(A+B+C==5)
	{
		printf("\nLa condicion es falsa ya que la Suma de  %d  +   %d  +  %d  es igual a %d y esto es igual a 5 ", A, B, C, (A+B+C));
	}
	else
	{
		printf("\nLa condicion es falsa ya que la Suma de  %d  +   %d  +  %d  es igual a %d y esto no es igual a 5 ", A, B, C, (A+B+C));
	}
	if((A+B==8)&&(A-B==2))
	{
		printf("\nLa condicion es verdadera ya que la Suma de  %d  +   %d  es igual a %d y esto es igual a 8 ", A, B, (A+B));
		printf("\n Y La condicion de la resta es verdadera ya que  %d  -   %d  es igual a %d y esto es igual a 2 ", A, B, (A-B));
	}
	else
	{
		printf("\nLa condicion es falsa ya que la Suma de  %d  +   %d  es igual a %d y esto no es igual a 8 ", A, B, (A+B));
		printf("\n O La condicion es de la resta es falsa ya que la resta  de  %d  -   %d   es igual a %d y esto no es igual a 2 ", A, B, (A-B));
	}
	if((A+B==8)||(A-B==6))
	{
		printf("\nLa condicion es verdadera ya que la Suma de  %d  +   %d  es igual a %d y esto es igual a 8 ", A, B, (A+B));
		printf("\n O La condicion de la resta es verdadera ya que  %d  -   %d  es igual a %d y esto es igual a 2 ", A, B, (A-B));
	}
	else
	{
		printf("\nLa condicion es falsa ya que la Suma de  %d  +   %d  es igual a %d y esto no es igual a 8 ", A, B, (A+B));
		printf("\n Y La condicion es de la resta es falsa ya que la resta  de  %d  -   %d   es igual a %d y esto no es igual a 6 ", A, B, (A-B));
	}
	if(A>3&&B>3&&C<3)
	{
		printf("\nLa condicion es verdadera por que: \n");
		printf("\nA= %d es mayor a 3 \n  y  B= %d es mayor a 3  \n y C= %d es menor que 3", A, B, C);
	}
	else
	{
		printf("\nLa condicion es Falsa por que: \n");
		printf("\nA= %d es menor a 3 \n  o  B= %d es menor a 3  \n o C= %d es mayor que 3", A, B, C);
	}
	
	
	
	/************************************************************Actividad Extra *******************************************************************/
	
	int a1=0, b1=0, c1=0;
	print("Ingrese 3 valores enteros");
	scanf("%d %d %d", &a1, &b1, &c1);
	if(a1>3)
	{
		printf("\nLa condicion es verdadera ya que %d es mayor a 3\n", a1);
	}
	else
	{
		printf("\nLa condicion es falsa ya que %d es menor que 3\n", a1);
	}
	if(a1>c1)
	{
		printf("\nLa condiciones es verdadera ya que A= %d y es mayor a C= %d\n", a1, c1);
	}
	else
	{
		printf("\nLa condicion es falsa ya que A= %d y es menor que a C= %d\n", a1, c1);
	}
	if(b1!=c1)
	{
		printf("\nLa condicion es verdadera ya que B= %d es diferente de C= %d \n", b1, c1);
	}
	else
	{
		printf("\nLa condicion es falsa ya que B= %d no es diferente de C= %d \n", b1, c1);	
	}
	if(a1==3)
	{
		printf("\nLa condicion es verdadera ya que A= %d es igual a 3\n", a1);
	}
	else
	{
		printf("\nLa condicion es falsa ya que A= %d es diferente de  3\n", a1);
	}
	if(a1*b1==15)
	{
		printf("\nLa condicion es verdadera ya que la multiplicacion de \n A = %d \n por B= %d \n es %d y es igual a 15", a1, b1, (a1*b1));
	}
	else
	{
		printf("\nLa condicion es  verdades falsa ya que la multiplicacion de \n A = %d \n y B= %d \n es %d y no es igual a 15", a1, b1, (a1*b1));
	}
	if(c1/b1<a1)
	{
		printf("\nLa condicion es verdadera ya que la division de \n C = %d \n entre B= %d \n es %d y es menor que A= %d", a1, b1, (c1/b1), a1);
	}
	else
	{
		printf("\nLa condicion es falsa ya que la division de \n C = %d \n entre B= %d \n es %d y es mayor que A= %d", c1, b1, (c1/b1), a1);
	}
	if(c1/b1 == -10)
	{
		printf("\nLa condicion es verdadera ya que la division de \n C = %d \n entre B= %d \n es %d y es igual a -10", c1, b1, (c1/b1));
	}
	else
	{
		printf("\nLa condicion es falsa ya que la division de \n C = %d \n entre B= %d \n es %d y no es igual a -10", c1, b1, (c1/b1));
	}
	if(a1+b1+c1==5)
	{
		printf("\nLa condicion es falsa ya que la Suma de  %d  +   %d  +  %d  es igual a %d y esto es igual a 5 ", a1, b1, c1, (a1+b1+c1));
	}
	else
	{
		printf("\nLa condicion es falsa ya que la Suma de  %d  +   %d  +  %d  es igual a %d y esto no es igual a 5 ", a1, b1, c1, (a1+b1+c1));
	}
	if((a1+b1==8)&&(a1-b1==2))
	{
		printf("\nLa condicion es verdadera ya que la Suma de  %d  +   %d  es igual a %d y esto es igual a 8 ", a1, b1, (a1+b1));
		printf("\n Y La condicion de la resta es verdadera ya que  %d  -   %d  es igual a %d y esto es igual a 2 ", a1, b1, (a1-b1));
	}
	else
	{
		printf("\nLa condicion es falsa ya que la Suma de  %d  +   %d  es igual a %d y esto no es igual a 8 ", a1, b1, (a1+b1));
		printf("\n O La condicion es de la resta es falsa ya que la resta  de  %d  -   %d   es igual a %d y esto no es igual a 2 ", a1, b1, (a1-b1));
	}
	if((a1+b1==8)||(a1-b1==6))
	{
		printf("\nLa condicion es verdadera ya que la Suma de  %d  +   %d  es igual a %d y esto es igual a 8 ", a1, b1, (a1+b1));
		printf("\n O La condicion de la resta es verdadera ya que  %d  -   %d  es igual a %d y esto es igual a 2 ", a1, b1, (a1-b1));
	}
	else
	{
		printf("\nLa condicion es falsa ya que la Suma de  %d  +   %d  es igual a %d y esto no es igual a 8 ", a1, b1, (a1+b1));
		printf("\n Y La condicion es de la resta es falsa ya que la resta  de  %d  -   %d   es igual a %d y esto no es igual a 6 ", a1, b1, (a1-b1));
	}
	if(A>3&&B>3&&C<3)
	{
		printf("\nLa condicion es verdadera por que: \n");
		printf("\nA= %d es mayor a 3 \n  y  B= %d es mayor a 3  \n y C= %d es menor que 3", a1, b1, c1);
	}
	else
	{
		printf("\nLa condicion es Falsa por que: \n");
		printf("\nA= %d es menor a 3 \n  o  B= %d es menor a 3  \n o C= %d es mayor que 3", a1, b1, c1);
	}
	
	return 0;
}
