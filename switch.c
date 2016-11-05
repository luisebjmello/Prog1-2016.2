#include<stdio.h>



int main()
{
    int num;
    printf("\n Entre com um numero de 1 a 3:\n");
    scanf("%d", &num);
    switch(num)
    {
         case 1:
               printf("\n Opçao 1 escolhida!\n");
               break;
         case 2:
               printf("\n Opçao 2 escolhida!\n");
               break;
         case 3:
               printf("\n Opção 3 escolhida!\n");
               break;
        default:
               printf("\n Nenhuma das opçoes escolhidas\n");
               break;                  
               }
        system("pause");
        return 0;
        
        }       
