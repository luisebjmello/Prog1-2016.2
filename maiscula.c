#include<stdio.h>
#include<string.h>
/* Faça um programa em C para ler uma palavra max: 20 minuscula e escrever em maisculo
ex: amor
    AMOR*/

int main()
{
  char palavra[20];
  int i;
  int tam;
  
   printf("\nEscreva uma palavra:\n");
   scanf("%s", palavra);
  
  tam = strlen(palavra);
  
  printf("\nPalavra Maiscula: \n");

  
  for(i=0; i <tam; i++)
    { printf("%c", palavra[i] - 32); }
  
  printf("\n");
  
  return 0;
  
}