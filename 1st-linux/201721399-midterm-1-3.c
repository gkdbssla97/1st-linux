/* 1-3번 문제 */
#include <stdio.h>

int main(void)
{
  int a=3,b=7;

  printf("교환\n");
  swap(&a,&b);
  printf("%d %d",a,b);
  return 0;
}


void swap(int *a,int *b)
{
  int temp;
  
  temp =*a;
  * a =*b;
  * b = temp;

}
