#include <stdio.h>
int main(void)
{
double a[7],b[7];
double c = 0;
for(int i=0;i<=7;i++)
{
printf("Please input the NO.%d number:\n",i+1);
scanf("%lf",&a[i]);
}
for(int j=0;j<=7;j++)
{
c += a[j];
b[j] = c;
}
for(int k=0;k<=7;k++)
{
printf("%.2lf\t",a[k]);
}
printf("\n");
for(int l=0;l<=7;l++)
{
printf("%.2lf\t",b[l]);
}

return 0;
}
