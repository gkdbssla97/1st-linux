#include <stdio.h>
//list - , list
int main() //bt , b main
{
  int i,num;
  int j =1;
  printf("Enter the number: ");
  scanf("%d",&num);

  for(i=1; i<=num;i++) // b9,watch i,p i 
    j=j*i;

  printf("The factorial of %d is %d\n",num,j);
}
