#include <stdio.h>
#define STAG1 360
#define STAG2 468
#define STAG3 720
#define RATE1 0.13230
#define RATE2 0.15040
#define RATE3 0.30025
#define RATE4 0.34025
int main(void)
{
int elec;
float cost;
printf("Please input the amount of electron:\n");
scanf("%d",&elec);
if(elec<=STAG1)
	cost = elec*RATE1;
else if(elec<=STAG2)
	cost = STAG1*RATE1+(elec-STAG1)*RATE2;
else if(elec<=STAG3)
	cost = STAG1*RATE1+(STAG2-STAG1)*RATE2+(elec-STAG2)*RATE3;
else if(elec>STAG3)
	cost = STAG1*RATE1+(STAG2-STAG1)*RATE2+(STAG3-STAG2)*RATE3+(elec-STAG3)*RATE4
;
printf("The cost of elec is %.2f",cost);
return 0;
}
