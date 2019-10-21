/* 1-1번 문제 */
#include <stdio.h>

double average(double in1, double in2);

int main(void)
{
  double in1=0,in2=0;

  printf("2개의 실수를 입력 받으시오.");
  average(in1,in2);

  return 0;
}

double average(double in1,double in2)
{
  float avg =0; 
  scanf("%lf %lf",&in1,&in2);
  
  avg =(double)(in1 + in2)/2;
  printf("평균의 값: %lf\n",avg);

  return 0;
}
