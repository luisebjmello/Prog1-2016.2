#include<stdio.h>

/* fazer um programa em C, usando vetor */

int main()
{
  
  int meuvetor[5];
  int i;
  
  
   meuvetor[0] = 10;
   meuvetor[1] = 3;
   meuvetor[2] = 5;
   meuvetor[3] = 9;
   meuvetor[4] = 7;
  
  
  for(i=0; i<=4; i++)
  {
    printf("\n Vetor[%d] = %d \n", i , meuvetor[i]);
  }
  
  return 0;
}
