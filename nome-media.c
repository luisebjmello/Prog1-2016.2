#include <stdio.h>

/*Fazer um programa para ler um nome e duas notas;
dizer olá fulano sua media é:...*/

int main () 
{
        char nome[20]; //caracteres da frase
        float num1, num2, media;
       
    
         
    
         printf("\n Qual seu nome? \n"); //tabela ascii)     
         scanf("%s", nome); 
           
         printf ("\n Qual sua nota da av1?\n");
         scanf ("%f", &num1);
         
         printf("\n Qual sua nota da av2?\n");
         scanf ("%f", &num2);
	   
         media = (num1+num2) / 2;
	
         printf("\n %s, sua media é = %.2f\n", nome, media );
           
          
	
    
    return 0;}