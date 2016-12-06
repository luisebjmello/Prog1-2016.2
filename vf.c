#include<stdio.h>

int main()
{
  int x=1;
  int y=0;
  
  if(!x && !y)
  {printf("\n 1 \n");}
  else if(y || !x)
  {printf("\n 2 \n");}
  else
  {printf("\n 3 \n");}
  
  return 0;
}