#include <stdio.h>
void to_base_n(unsigned long n,int k);
int main(void)
{
unsigned long number;
int k;
printf("Enter an integer and jinzhi (q to quit):\n");
while (scanf("%lu %d", &number,&k) == 2){
printf("Binary equivalent: ");
to_base_n(number,k);
putchar('\n');
printf("Enter an integer (q to quit):\n");
}
printf("Done.\n");
return 0;
}
void to_base_n(unsigned long n,int k) /* 递归函数 */
{
int r;
r = n % k;
if (n >= k)
to_base_n(n / k,k);
putchar(r == 0 ? '0' : '1');
return;
}
