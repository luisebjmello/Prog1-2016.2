#include <stdio.h>

/* Fazer um programa em C para calcular e exibir a tabela de adição de 5 */

   int main () 
{

	int num=1;
	
	printf("\n Tabuada de Adição de 5:\n");
	printf("\n==========================\n");
   
	 for(num=1; num<=10; num++)
	 
	{
        
         printf("\n %d+%d= %d \n", 5, num, num+5);     
                
                }
                
        printf("\n==========================\n");
        
	
	system("pause")/* quando o programa executar e nao abrir*/;
			
	return 0;
}
