#include <stdio.h>
int main ()
{
	float x=5.5;
	float *p =&x;
	printf("Adress ofp: %p \n" ,p);
	p++;
	printf("Adress of p: %p \n",p);
	return 0;
}
