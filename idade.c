#include <stdio.h>
/*
fazer um programa pra dizer a idade a partir do ano que nasceu
*/
int main()
{
 //declara variaveis
           int ano;
// imprime um texto
   printf("Que ano voce nasceu?\n");
 //ler ano de nascimento e guardar na variavel ano
       scanf("%d", &ano);
        printf("\n Idade = %d \n", 2016-ano);
        system("pause");
        return 0;
}
