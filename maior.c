#include <stdio.h>

/* Fazer um programa em C para:
    Ler varios numeros e calcular o maior */

   int main () 
{

	int num;
	int maior=-1;
	int resposta;
	
	

	
  	do
  	
    {
            printf("\n Entre com um numero: ");
            scanf("%d", &num);
            
            if (num>maior)
            { 
               maior = num;
                          }
            printf("\n deseja continuar(0-s/1-n)?");
            scanf("%d", &resposta);
               } while(resposta==0);
                
    printf("\n Maior numero: %d \n", maior);
               
            
             
        
	
	system("pause")/* quando o programa executar e nao abrir*/;
			
	return 0;
}
