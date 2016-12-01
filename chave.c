#include<stdio.h>

// REFAZER

int main()
{
  int num[10];
    int i;
  
  for(i=0;i<=9;i++)
  {
    printf("\n Escreva um numero: \n");
    scanf("%d", num[i]);
  }
  
  for(i=0;i<=9;i++)
  {
    printf("\n Diga um numero: \n");
    scanf("%d", num[i]);
    
    if(num[i] == num[i])
    {
      printf("\n CHAVE ENCONTRADA \n");
          } else
    {printf("\n CHAVE NAO ENCONTRADA \n");}
    
  }
  
  
  
  
 return 0;
}