#include <stdio.h>
#define STLEN 14
int main(void)
{
char words[STLEN];
puts("Enter a string ,please.(Empty line to quit.)");
while(fgets(words,STLEN,stdin)!=NULL&&words[0]!='\n')
fputs(words,stdout);
puts("Done.");
return 0;
}
