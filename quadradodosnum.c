#include <stdio.h>

/* Fazer um programa em C para calcular e exivir o quadrado dos numeros de 1 a 10  */

   int main () 
{
	int cont;
	//int num=1;
	
	
	
	printf("\n Inicio da Contagem:\n"); /* printf(" O quadrado de %d=%d, num, num+num);*/
	
	for(cont=1; cont<=10; cont++ /*cont++ = cont + 1*/) /* for(num=1; num; num<=10; num++*/
	{
        
        printf("\n %d\n ", cont*cont);        
                }
                
        printf("\n Fim da Contagem!\n");
	
	system("pause")/* quando o programa executar e nao abrir*/;
			
	return 0;
}
