#include <stdio.h>

/* Fazer um programa em C para exibir n�meros pares de O a 50  */

   int main () 
{
	int cont;
	
	printf("\n Inicio da Contagem:\n");
	
	for(cont=0; cont<=50/*condi��o para se manter dentro do la�o*/; cont=cont+2 /*cont++ = cont + 1, � quanto ele vai add ao numero inicial*/)
	{
        printf("\n %d\n ", cont);        
                }
                
        printf("\n Fim da Contagem!\n");
	
	system("pause")/* quando o programa executar e nao abrir*/;
			
	return 0;
}
