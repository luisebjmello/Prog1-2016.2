#include <stdio.h>

/* fa�a um programa em C para ler um numero inteiro
e dizer se ele � par ou impar.
lembrando do operador de resto � o: % 
5 % 2 == 1
10 % 2 == 0*/

int main () 
{
	int num;
	
	printf("\n Diga um numero:");
	scanf("%d", &num);
	
	if((num%2)==0)
	{ //condi��o verdadeira
		printf("\n Numero par");
;	} 
	else
	{ // condi��o falsa
		printf("\n Numero impar");
	}
	
	return 0;

	
}
