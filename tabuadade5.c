#include <stdio.h>

/* Fazer um programa em C para calcular e exibir a tabuada de 5 */

   int main () 
{

	int num=1;
	
	
	printf("\n Tabuada de 5:\n");
	printf("\n==========================\n");
	
   
	 for(num=1; num<=10; num++)
	 
	{
        
         printf("\n %dx%d= %d \n", 5,num, num*5);     
                
                }
            
      printf("\n==========================\n") ;         
        
	
	system("pause")/* quando o programa executar e nao abrir*/;
			
	return 0;
}
