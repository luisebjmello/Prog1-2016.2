#include<stdio.h>

/*fa�a um programa para simular uma calculadora conforme o ex:
       1- adi��o
       2-subtra��o
       3-multiplica��o
       4 divis�o
       Deseja continuar 1-s/2-s*/


int main()
{
    int num1;
    int num2;
    int op;
    int resposta;
  
   do{ 
   
    printf("\n Escolha um numero de 1 a 4:\n");
    scanf("%d", &op);
    
      
    switch(op)
    {
         case 1:
               printf("\n Diga um numero:\n"); /*printf(" Escolha uma opera�ao")*/
               scanf("%d", &num1);             /*printf(" 1- Adi�ao")*/                    
                                               /*printf(" 2- Subtra��o")*/ 
               printf("\n Diga um numero:\n"); /*printf(" 3- Multiplica��o ")*/ 
               scanf("%d", &num2);             /*printf(" 4- Divis�o")*/ 
                                               /*printf(" Op�ao:")*/ 
               printf("\n Resultado: %d \n", num1+num2); /*scanf(" %d", &op)*/
         
               break;
               
         case 2:
                printf("\n Diga um numero:\n");
               scanf("%d", &num1);
       
               printf("\n Diga um numero:\n");
               scanf("%d", &num2);
               
               printf("\n Resultado: %d \n", num1-num2);
               break;
         case 3:
                printf("\n Diga um numero:\n");
               scanf("%d", &num1);
       
               printf("\n Diga um numero:\n");
               scanf("%d", &num2);
               
               printf("\n Resultado: %d \n", num1*num2);
               break;
        case 4:
              printf("\n Diga um numero:\n");
               scanf("%d", &num1);
       
               printf("\n Diga um numero:\n");
               scanf("%d", &num2);
               
               printf("\n Resultado: %.2f \n", (float)num1/num2);
               break;  
        default:
                printf("\n Numero Invalido!\n");
                break;      }
        
      printf("\n deseja continuar(1-s/2-n)?");
                scanf("%d", &resposta); }
        
                                     
               
    while(resposta==1);
               printf("\n Obrigada e ate logo!\n");
                    
                
                          
        system("pause");
        return 0;
        
        }       
