#include <stdio.h>
#define G_L 3.785
#define I_K 1.609
int main(void)
{
float Inli,Galen,InliperGalen,Km,L,Lper100Km;
printf("Please input the Inli and Galen:\n");
scanf("%f %f",&Inli,&Galen);
InliperGalen = Inli/Galen;
printf("InliperGalen is %.1f\n",InliperGalen);
Km = Inli*I_K;
L = Galen*G_L;
Lper100Km = L/Km;
printf("%f %f L/100km is %f\n",Km,L,Lper100Km);
return 0;
}
