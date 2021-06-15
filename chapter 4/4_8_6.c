#include <stdio.h>
#include <string.h>
int main(void)
{
char lastname[40],firstname[40];
int width_last,width_first;
printf("Please input you lastname:\n");
scanf("%s",lastname);
printf("Please input you firstname:\n");
scanf("%s",firstname);
width_last = strlen(lastname);
width_first = strlen(firstname);
printf("%s %s\n%-*d %-*d\n",lastname,firstname,width_last,width_last,width_first,width_first);
return 0;
}
