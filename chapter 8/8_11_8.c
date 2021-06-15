#include <stdio.h>
float add(float a,float b);
float subtract(float a,float b);
float multiply(float a,float b);
float divide(float a,float b);
int main(void)
{
char ch;
float number1,number2;
printf("Enter the opreation of the choice:\n");
printf("a) add			s) subtract\n");
printf("m) multiply		d) divide\n");
printf("q) quit\n");
while((ch=getchar())!='q')
{
	printf("Enter first number:");
	while(!scanf("%f",&number1))
		{
		printf("This is not a number.\n");	
		printf("Please enter a number,such as 2.5,-1.78E8 or 3:\n");
		while(getchar()!='\n')
			break;
		}
	printf("Enter second number:");
	while(!scanf("%f",&number2))
        {
                printf("This is not a number.\n");
                printf("Please enter a number,such as 2.5,-1.78E8 or 3:\n");
                while(getchar()!='\n')
                        break;
        }
	switch (ch)
{	case 'a':printf("%f+%f=%f\n",number1,number2,number1+number2);break;
	case 's':printf("%f-%f=%f\n",number1,number2,number1-number2);break;
	case 'm':printf("%f*%f=%f\n",number1,number2,number1*number2);break;
	case 'd':
		{
			if(number2==0)
			{
			printf("Enter a number other than 0:\n");
			scanf("%f",&number2);	
			}
			printf("%f/%f=%f\n",number1,number2,number1/number2);
			break;
		}
}
printf("Enter the opreation of the choice:\n");
printf("a) add                  s) subtract\n");
printf("m) multiply             d) divide\n");
printf("q) quit\n");
while(getchar()!='\n')
                        break;

}
printf("Bye!\n");
return 0;
}
