#include <stdio.h>
void calculate(int*x,int*y,int*z)
{
	int a = *x, b = *y, c = *z;
	 
	*x = a + b + c;
	*y = a - b;
	*z = a * b;
}
int main()
{
	int x,y,z;
	printf("enter the value of (x,y,z): ");
	scanf("%d %d %d " ,&x ,&y ,&z);
	
	calculate(&x,&y,&z);

	printf("Modified x (sum): %d\n", x);
	printf("Modified y (difference): %d\n", y);
       	printf("Modified z (product): %d\n", z);
	return 0;
}

