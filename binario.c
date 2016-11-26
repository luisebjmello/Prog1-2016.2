#include<stdio.h>
#include<string.h>
/* Fazer um programa que converta numero decimal para binario 
Ex: numero decimal: 2 
    numero convertido pra binario: 10 eu q*/

int main()
{
  int numero;
  int i=0;
  int j;
  int resto;
  int result;
  int binario[10];
  
  
  printf("\n Digite um numero: \n");
  scanf("%d", &numero);
      
  
  	do
    {
       result = numero / 2;
       resto = numero % 2;
      binario[i] = resto;
      i++;
      numero = result;
      
               } while(result != 1); 
  
  
    binario[i] = 1;
  
  printf("\n Convertido para Binario = ");

  
  for(j=i; j>=0; j--)
  {
    printf("%d", binario[j]);
  }
  
  printf("\n\n");
  
    
  
  
  return 0;
}
