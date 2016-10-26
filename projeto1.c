#include <stdio.h>

/* faça um programa em C para ler um numero inteiro
e dizer se ele é par ou impar.
lembrando do operador de resto é o: % 
5 % 2 == 1
10 % 2 == 0*/

int main () 
{
	int num;
	
	printf("\n Diga um numero:");
	scanf("%d", &num);
	
	if((num%2)==0)
	{ //condição verdadeira
		printf("\n Numero par");
;	} 
	else
	{ // condição falsa
		printf("\n Numero impar");
	}
	
	return 0;

	
}
