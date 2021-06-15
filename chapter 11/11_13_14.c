#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
printf("已知幂的底数为%lf幂的指数为%d\n",atof(argv[1]),atoi(argv[2]));
double a = atof(argv[1]);
int b = atoi(argv[2]);
double answer = 1;
for(int i=1;i<=b;i++)
	answer *= a;
printf("结果为%lf",answer);
return 0;
}

