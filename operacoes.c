#include <stdio.h>
/*

Faça um  programa em C para:
ler 2 numeros:
int num1, num2;

imprimir a soma destes 2 numeros

*/

int main()
{
	int num1, num2;
	
	printf("\nEntre com num1:");
	scanf("%d", &num1);
	
	printf("\nEntre com num2:");
	scanf("%d", &num2);
	
	printf("\nSoma = %d", num1+num2);
	printf("\nSubtracao = %d", num1-num2);
	printf("\nMultiplicacao = %d", num1*num2);
	printf("\nDivisao = %.2f", (float)num1/num2);
	
	
	return 0;
}



