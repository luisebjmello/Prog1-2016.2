#include <stdio.h>

/* Fazer um programa em C para:
    Ler varios numeros e calcular o menor */

   int main () 
{

	int num;
	int menor= 1000000;
	int resposta;
	
	

	
  	do
  	
    {
            printf("\n Entre com um numero: ");
            scanf("%d", &num);
            
            if (num<menor)
            { 
               menor = num;
                          }
            printf("\n deseja continuar(0-s/1-n)?");
            scanf("%d", &resposta);
               } while(resposta==0);
                
            printf("\n Menor numero: %d \n", menor);
               
            
             
        
	
	system("pause")/* quando o programa executar e nao abrir*/;
			
	return 0;
}
