#include <stdio.h>

/*Fazer um programa para digitar uma letra e dizer se ela é maiuscula ou minuscula */

int main () 
{
         char letra;
    
         
    
          printf("\n Digite uma letra:\n"); //tabela ascii)     
           scanf("%c", &letra);  
           
            if((letra>=65) && (letra<=90))
            
	{ printf("\n Letra Maiscula!\n");
	
	}
		else
		{
			printf("\n Letra Miniscula!\n");
			}
	
    system("pause");
    return 0;}
