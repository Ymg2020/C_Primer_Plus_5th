#include <stdio.h>
#include <float.h>
int main(void)
{
float f = 1.0/3.0;
double d = 1.0/3.0;
printf("FLT_DIG is %d,DBL_DIG is %d\n",FLT_DIG,DBL_DIG);
printf("The float 1.0/3.0 is %.6f %.12f %.16f\n",f,f,f);
printf("The double 1.0/3.0 is %.6f %.12f %.16f\n",d,d,d);
return 0;
}
