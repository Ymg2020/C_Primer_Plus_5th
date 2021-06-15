#include <stdio.h>
int main(void){

	float number;
	printf("Enter a floating-point number:\n");
	scanf("%f",&number);
	printf("fixed-point number is:%lf\n",number);
	printf("expotential notation is :%e\n",number);
	printf("p notation is :%a\n",number);
	return 0;
}
