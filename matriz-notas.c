#include<stdio.h>
/* Faça um programa em C para ler as 3 notas(av1, av2 e av3) de 4 alunos 
imprimir todas as av1's'*/

int main()
{
  float notas [4][3]; // [linha= i ou y][coluna= j ou x]
  int i;
  int j;
   
 // pra ler as notas: [i][j] 
 /* scanf("%f", &nota[0][0]); // aluno1 av1
  scanf("%f", &nota[0][1]); // aluno1 av2
  scanf("%f", &nota[0][2]); // aluno1 av3
  scanf("%f", &nota[1][0]); // aluno2 av1
  scanf("%f", &nota[1][1]); // aluno2 av2
  scanf("%f", &nota[1][2]); // aluno2 av3 */

   for(i=0; i<=3; i++)
    { for(j=0; j<=2; j++)
      { printf("\n Entre com a av %d do aluno %d \n", j+1, i+1);
      scanf("%f", &notas[i][j]); }
    }
  
  printf("\n Resultado Final: \n");
  printf("\n----------------------------------------------------------------------------------------------\n");
  printf("\n Nome: \t\t\t\t Av1: \n");
  printf("\n----------------------------------------------------------------------------------------------\n");
  
 for(i=0; i<=3; i++)
 
   {  printf("\n Aluno %d: \t\t\t\t %.2f \n", i+1, notas[i][0]);
      printf("\n------------------------------------------------------------------------------------------\n");}
    
 

  


  return 0;
  
}