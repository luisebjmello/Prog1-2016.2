#include<stdio.h>

int main()
{
  int num;
  
  printf("\n Escreva um numero: \n");
  scanf("%d", &num);
  
  if(num == 9)
  {
    printf("\n VOCE DIGITOU O NUMERO 9 \n");
    
  }
  else
  {
    printf("\n VOCE NAO DIGITOU O NUMERO 9 \n");
  }
  
  return 0;
  
}