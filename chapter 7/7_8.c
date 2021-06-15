#include <stdio.h>
#define COVER 350
int main(void)
{
int cover,number;
printf("Enter number of square feet to be painted:\n");
while((scanf("%d",&cover))==1)
{number = cover/COVER;
number += (cover%COVER==0)?0:1;
printf("You need %d %s of paint.\n",number,(number==1)?"can":"cans");
printf("Enter next number(q to quit!)\n");
}
return 0;
}
