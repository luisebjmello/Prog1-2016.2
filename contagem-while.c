#include <stdio.h>

/* Fazer um programa em C para exibir n�meros de O a 50  */

   int main () 
{
	int cont;
	
	printf("\n Inicio da Contagem:\n");
	
    cont=0;
	
	 while(cont<=50)/*condi�ao no inicio, antes do la�o*/
	 
    {
            printf("\n %d\n ", cont);
            cont=cont+5;
               }
           

                
        printf("\n Fim da Contagem!\n");
	
	system("pause")/* quando o programa executar e nao abrir*/;
			
	return 0;
 }
