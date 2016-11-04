#include <stdio.h>
/*

Faça um  programa em C para:
ler base e altura e calcular a area de um triangulo
area = ( base * altura ) / 2

*/
int main()
{
	int base, altura;
	float area;
	
	printf("\nEntre com a base:");
	scanf("%d", &base);
	
	printf("\nEntre com a altura:");
	scanf("%d", &altura);
	
	area = (base * altura)/2.0;
	
	printf("\Area trinagulo = %f", area);
	
	return 0;
}
