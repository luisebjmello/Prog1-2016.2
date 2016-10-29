#include <stdio.h>

/* Fazer um programa em C para exibir números de O a 50  */

   int main () 
{
	int cont;
	
	printf("\n Inicio da Contagem:\n");
	
    cont=0;
	
	do
    {
            printf("\n %d\n ", cont);
            cont=cont+1;
               }
     while(cont<=50); /*condiçao no final, depois do laço*/      

                
        printf("\n Fim da Contagem!\n");
	
	system("pause")/* quando o programa executar e nao abrir*/;
			
	return 0;
}
