#include<stdio.h>



int main()
{
    int num;
    printf("\n Entre com um numero de 1 a 3:\n");
    scanf("%d", &num);
    switch(num)
    {
         case 1:
               printf("\n Op�ao 1 escolhida!\n");
               break;
         case 2:
               printf("\n Op�ao 2 escolhida!\n");
               break;
         case 3:
               printf("\n Op��o 3 escolhida!\n");
               break;
        default:
               printf("\n Nenhuma das op�oes escolhidas\n");
               break;                  
               }
        system("pause");
        return 0;
        
        }       
