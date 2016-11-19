#include<stdio.h>
/*programa em C, para ver as notas dos alunos e imprimir as notas 
1- igual e/ou maiores que a media calculada no programa 
2- maiores notas
3- porcentagem de alunos que tiraram >= 6.0*/

int main ()
{
  float vetor[10];
  float soma=0;
  float media;
  int i;
  int maior=-1;
  

  for(i=0; i<=9; i++)
  {
  
    printf("\n Entre com a nota do aluno %d: \n", i+1);
    scanf("%f", &vetor[i]);
    soma = soma + vetor[i];
 
  }
  
  media = soma / 10;
  printf("\n Media = %.2f \n", media);
  
   printf("\n -------------------------------------------------- \n");
   printf("\n Aluno com notas maiores ou iguais a media: \n");
  
   for(i=0; i<=9; i++)
  {
      if(vetor[i] >= media)
      
       printf ("\n Aluno %d -> Nota = %f\n", i+1, vetor[i]); 
    
  }
   
  printf("\n -------------------------------------------------- \n");
  
  for(i=0; i<=9; i++) //CONSERTARRRRRRRRR!!!! REFAZER!
  {
    
      if(maior > vetor[i])
        
      {vetor[i] = maior;}
        
       printf ("\n Quantidade de alunos acima da media: %d \n", maior); 
    
  }
  
  
  
  return 0;
    
}