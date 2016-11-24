#include<stdio.h>
#include<string.h>
/* Faça um programa em C para ler uma palavra max: 20 de trás pra frente
ex: entre com a palavra Alex
    palavra inversa: xelA*/

int main()
{
  char palavra[20];
  int i;
  int tam;
  
   printf("\nEscreva uma palavra:\n");
   scanf("%s", palavra);
  
  tam = strlen(palavra);
  
  printf("\n Palavra Invertida: \n");

  
  for(i=tam-1; i >=0; i--)
    { printf(" %c ", palavra[i]); }
  
  printf("\n");
  
  return 0;
  
}