#include "12_9_2.h"
void set_mode(int a)
{
	if(a==0||a==1)
		mode = a;
	else 
		exit(EXIT_FAILURE);
}
void get_info(void)
{
	if(mode == 0)
	{
	printf("Enter distance traveled in kilometers:");
	scanf("%d",&dist);
	printf("Enter fuel consumed in liters:");
	scanf("%f",&fuel);
	}
	else if(mode == 1)
	{
	printf("Enter distance traveled in miles:");
	scanf("%d",&dist);
	printf("Enter fuel consumed in gallons:");
	scanf("%f",&fuel);
	}
}
void show_info(void)
{
	if(mode == 0)
		printf("Fuel consumption is %.2f liters per 100 km.\n",(fuel/(dist/100)));
	else
		printf("Fuel consumption is %.2f miles per gallon.\n",dist/fuel);
}
