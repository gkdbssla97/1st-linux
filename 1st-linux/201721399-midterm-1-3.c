/* 1-3번 문제 */
#include <stdio.h>

int main(void)
{
  int pa=3,pb=7;

  printf("교환\n");
  swap(&pa,&pb);
  printf("%d %d",pa,pb);
  return 0;
}


void swap(int *pa,int *pb)
{
  int temp;
  
  temp =*pa;
  * pa =*pb;
  * pb = temp;

}
