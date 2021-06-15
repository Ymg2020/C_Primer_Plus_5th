#include "12_9_2.h"
int set_mode(int a,int mode)
{
	if(a==0||a==1||a==-1)
		return a;
	else if(a > 1) 
	{	
		if(mode == 0)
		{
		puts("Invalid mode specified.Mode 0(metric) used");
		return 0;
		}
		else if(mode == 1)
		{
		puts("Invalid mode specified.Mode 1(US) used");
		return 1;
		}
	}	
}
void get_info(int mode,int *dist,float *fuel)
{
	if(mode == 0)
	{
	printf("Enter distance traveled in kilometers:");
	scanf("%d",dist);
	printf("Enter fuel consumed in liters:");
	scanf("%f",fuel);
	}
	else if(mode == 1)
	{
	printf("Enter distance traveled in miles:");
	scanf("%d",dist);
	printf("Enter fuel consumed in gallons:");
	scanf("%f",fuel);
	}
}
void show_info(int mode,int dist,float fuel)
{
	if(mode == 0)
		printf("Fuel consumption is %.2f liters per 100 km.\n",(fuel/(dist/100)));
	else if(mode == 1)	
		printf("Fuel consumption is %.2f miles per gallon.\n",dist/fuel);
}
