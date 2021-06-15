#include "12_9_2.h"
int main(void)
{
int mode,mod,dist;
float fuel;
printf("Enter 0 for metric mode,1 for US mode:");
scanf("%d",&mode);
while(mode >=0)
{
	mode = set_mode(mode,mod);
	get_info(mode,&dist,&fuel);
	show_info(mode,dist,fuel);
	printf("Enter 0 for metric mode,1 for US mode:");
	mod = mode;
	scanf("%d",&mode);
}
printf("Done.\n");
return 0;
}
