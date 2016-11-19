#include<stdio.h>
/*programa em C para 10 numeros reais, e imprimir a media dos 10 numeros*/

int main()
{
  float vetor[10];
  float soma=0;
  float media;
  int i;
  

  for(i=0; i<=9; i++)
  {
  
    printf("\n Entre com a nota do aluno %d: \n", i+1);
    scanf("%f", &vetor[i]);
    soma = soma + vetor[i];
  }
  
  media = soma / 10;
  printf("\n Media = %.2f \n", media);
  
  
  return 0;
    
}