#include<stdio.h>

int main()
{
  int i;
  int j;
  int x;
  char nome[10];
  
  printf("\n Entre com seu nome: \n");
  scanf("%s", nome);
  
  
  for(i=4;i<23;i++)
  {
    j=i;
  }
  
  x = j+20;
    
    printf("\n Ola, %s, x = %d \n", nome, x);
  
  return 0;
}