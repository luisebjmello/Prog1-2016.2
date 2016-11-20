#include<stdio.h>

/* Unilasalle - SI/Noite
 Aluna: Luise Mello
 Matricula: 0050014552*/

int main()
{
      int origem;
	    int destino;
 

  
          printf("\n Ola, eu sou a Luise! Qual sua origem?\n");
          printf("\n 1-RJ  \n 2-SP  \n 3-SSA \n\n");
          scanf("%d", &origem);
   
  
        switch(origem)
        
	     	{ case 1:
                   printf("\n Entendi, Sua Origem: Rio de Janeiro \n");
                   printf("\n Qual seu destino? \n");
                   printf("\n 1-RJ  \n 2-SP  \n 3-SSA \n\n");
                   scanf("%d", &destino);

  	switch (destino)
	
    	{ case 1:
	         printf("\n OH NAO! O destino tem que ser diferente da origem! \n");
            printf("\n Qual seu destino? \n");
            printf("\n 2-SP  \n 3-SSA \n\n");
            scanf("%d", &destino);
          
            if (destino == 2)
	       { printf("\n Entendi, Sao Paulo!\n");
           printf("\nValor da passagem RJ -> SP = R$150,00 ou US$= 44,11!\n");
           printf("\n Obrigada e Boa viagem! \n\n");}

            if (destino == 3)
        {	printf("\n Entendi, Salvador!\n");
          printf("\n Valor da passagem RJ -> SSA = R$300,00 ou US$= 88,23 \n"); 
          printf("\n Obrigada e Boa viagem! \n\n");}
  
      break;}

         if (destino == 2)
	       { printf("\n Entendi, Sao Paulo!\n");
           printf("\nValor da passagem RJ -> SP = R$150,00 ou US$= 44,11!\n");
           printf("\n Obrigada e Boa viagem! \n\n");}

            if (destino == 3)
        {	printf("\n Entendi, Salvador!\n");
          printf("\n Valor da passagem RJ -> SSA = R$300,00 ou US$= 88,23 \n"); 
          printf("\n Obrigada e Boa viagem! \n\n");}
  
      break;
  
  
   case 2:
                  printf("\n Entendi, Sua Origem: Sao Paulo \n");
                   printf("\n Qual seu destino? \n");
                   printf("\n 1-RJ  \n 2-SP  \n 3-SSA \n\n");
                   scanf("%d", &destino);
	       if (destino == 1)
	       { printf("\n Entendi, Rio de Janeiro!\n");
           printf("\nValor da passagem SP -> RJ = R$160,00 ou US$= 47,05!\n");
           printf("\n Obrigada e Boa viagem! \n\n");}
    
     	switch(destino)
      
			{case 2:
	
            
           
	printf("\n OH NAO! O destino tem que ser diferente da origem! \n");
            printf("\n Qual seu destino? \n");
            printf("\n 1-RJ  \n 3-SSA \n\n");
            scanf("%d", &destino);
             
	

        if (destino == 1)
	       { printf("\n Entendi, Rio de Janeiro!\n");
           printf("\nValor da passagem SP -> RJ = R$160,00 ou US$= 47,05!\n");
           printf("\n Obrigada e Boa viagem! \n\n");}
          
            if (destino == 3)
        {	printf("\n Entendi, Salvador!\n");
          printf("\n Valor da passagem SP -> SSA = R$180,00 ou US$= 52,94 \n"); 
          printf("\n Obrigada e Boa viagem! \n\n");} 
  
      break;}
	  
        
          
            if (destino == 3)
        {	printf("\n Entendi, Salvador!\n");
          printf("\n Valor da passagem SP -> SSA = R$180,00 ou US$= 52,94 \n"); 
          printf("\n Obrigada e Boa viagem! \n\n");}
  
      break;
            
case 3:
                    printf("\n Entendi, Sua Origem: Salvador \n");
                   printf("\n Qual seu destino? \n");
                   printf("\n 1-RJ  \n 2-SP  \n 3-SSA \n\n");
                   scanf("%d", &destino);
	
	         if (destino == 1)
        {	printf("\n Entendi, Rio de Janeiro!\n");
          printf("\n Valor da passagem SSA -> RJ = R$280,00 ou US$= 82,35 \n"); 
          printf("\n Obrigada e Boa viagem! \n\n");}
            
            if (destino == 2)
	       { printf("\n Entendi, Sao Paulo!\n");
           printf("\nValor da passagem SSA -> SP = R$175,00 ou US$= 51,47!\n");
           printf("\n Obrigada e Boa viagem! \n\n");}
           
	
	 	switch(destino)
	      
	      
		{case 3:
	
     	     printf("\n OH NAO! O destino tem que ser diferente da origem! \n");
            printf("\n Qual seu destino? \n");
            printf("\n 1-RJ  \n 2-SP \n\n");
            scanf("%d", &destino);
            
            
      	if (destino == 1)
        {	printf("\n Entendi, Rio de Janeiro!\n");
          printf("\n Valor da passagem SSA -> RJ = R$280,00 ou US$= 82,35 \n"); 
          printf("\n Obrigada e Boa viagem! \n\n");}
            
           if (destino == 2)
	       { printf("\n Entendi, Sao Paulo!\n");
           printf("\nValor da passagem SSA -> SP = R$175,00 ou US$= 51,47!\n");
           printf("\n Obrigada e Boa viagem! \n\n");}
            
     
      break;}
	    break;

     
  
          
              
            
            }
           
    

    return 0;
}
