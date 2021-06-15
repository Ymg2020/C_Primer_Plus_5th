#include <stdio.h>
#include <math.h>
int main()
{
int x;
float y;
float z=1;
printf("Please input the pow of calculate:\n");
scanf("%d",&x);
for(int i=1;i<=x;i++)
{	
if((i%2)==0)
z += 1.0/(i+1)*(-1);
else
z += 1.0/(i+1);
}
printf("The number is %f",z);
return 0;
}
