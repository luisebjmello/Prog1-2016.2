#include<stdio.h>

int main()
{
  int idade;
  
  printf("\n Diga sua idade: \n");
  scanf("%d", &idade);
  
  if(idade<16)
  { printf("\n VOCE NAO PODE VOTAR!\n");}
  else if(idade >=18 && idade<=70)
  { printf("\n VOTO OBRIGATORIO!\n");}
  else
  {printf("\n VOTO FACULTATIVO! \n");}
  
  return 0;
}