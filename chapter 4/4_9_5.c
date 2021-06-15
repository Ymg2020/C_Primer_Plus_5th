#include <stdio.h>
int main(void)
{
float speed,volume,time;
printf("Please input the speed of download and the volume of the file:\n");
scanf("%f %f",&speed,&volume);
time = volume*8/speed;
printf("At %.2f magabits per second,a file of %.2f magabytes\ndownloads in %.2f seconds.\n",speed,volume,time);
return 0;
}
