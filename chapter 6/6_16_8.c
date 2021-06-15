#include <stdio.h>
float counter(float a,float b);
int main(void){
float a,b,c,d;
printf("Please input the first number:\n");
int i = scanf("%f",&a);
printf("Please input the second number:\n");
int j = scanf("%f",&b);
while(i==1&&j==1)
{
float answer = counter(a,b);
printf("%f\n",answer);
printf("Please input the first number:\n");
i = scanf("%f",&a);
printf("Please input the second number:\n");
j = scanf("%f",&b);
}
printf("Byebye!\n");
return 0;
}

float counter(float a,float b)
{
float answer = (a-b)/(a*b);
return answer;
}
