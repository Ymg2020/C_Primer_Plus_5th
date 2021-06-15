#include <stdio.h>
int main(void)
{
	int normal = 60000;
	int toobig = normal*5E100;
	float toosmall = 0.1234E-63;
	float tootoosmall = toosmall/10;
	float bigbig = 4.3E38*100.0f;
	printf("normal is %d,toobig is %d,bigbig is %e\n",normal,toobig,bigbig);
	printf("toosmall is %e and tootoosmall is %e\n",toosmall,tootoosmall);
	return 0;
}
