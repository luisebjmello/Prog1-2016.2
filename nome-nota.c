#include<stdio.h>
/* Faça um programa em C para ler as 3 notas(av1, av2 e av3) de 4 alunos 
 pedir a matricula (nome do aluno) e dizer */

int main()
{
  float notas [4][3]; // [linha= i ou y][coluna= j ou x]
  int i;
  int j;
  int aluno;
  float av1;
  float av2;
  float av3;
  
  
   
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
  
  printf("\n Diga sua matricula: \n");
  scanf("%d", &aluno);
  
   printf("\n Nome: \t\t\t\t Av1 \t\t\t Av2 \t\t\t Av3 \t\t\t Resutado: \t\t \n\n");
   printf("\n---------------------------------------------------------------------------------------------------------------------\n");
  

  i = aluno - 1;
  av1 = notas[i][0];
  av2 = notas[i][1];
  av3 = notas[i][2];
  
  if(av1>=av2 && av1>=av3)
   { if(av2>av3)
   { media = (av1+av2)/2; } else { media = (av1+av3)/2;}}
    else if(av2>av3)
    {
      if(av1>av3)
      { media = (av2+av1)/2; }
      else { media = (av2+av3)/2}}
    
  else if(av1>av2)
  {media = (av3+av1)/2;}
  else{ media = (av3+av2)/2;}
  
  if(media>=6)
  { 
  printf("\n Aluno %d: \t\t\t\t %.2f \t\t\t %.2f \t\t\t %.2f \t\t APROVADO \n\n", aluno, notas[i][0], notas[i][1], notas[i][2]); }
  
  else
  {
    printf("\n Aluno %d: \t\t\t\t %.2f \t\t\t %.2f \t\t\t %.2f \t\t REPROVADO \n\n", aluno, notas[i][0], notas[i][1], notas[i][2]);
  }

return 0;}
 
   
   