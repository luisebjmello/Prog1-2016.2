#include <stdio.h>

/* Fa�a um programa em C para ler uma idade e dizer se essa pessoa
pode dirigir ou n�o. Assumindo que s� maiores de idade podem dirigir */

int main () 
{
	int idade;
	
	printf("\n Quantos anos voce tem? \n ");
	scanf ("%d", &idade);
	
	if((idade)>=18)
	{ printf("\n Voce pode dirigir!");
	
	}
		else
		{
			printf("\n Voce nao pode dirigir!");
			}
			
	return 0;
}
