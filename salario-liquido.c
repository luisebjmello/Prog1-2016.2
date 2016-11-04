#include <stdio.h>
/*salario liquido a partir do salario bruto
 20% a menos do salario bruto*/

int main()
{
	float sal_bruto, sal_liq;
	
	printf("\nEntre com salario bruto:");
	scanf("%f", &sal_bruto);
	
	sal_liq = sal_bruto * 0.8;
	
	printf("\nSalario Liquido = %f", sal_liq);
	
	return 0;
}
