#include <stdio.h>
void calculate_circle(float radius, float *circumference, float *area)
{
	const float PI=3.14;
	*circumference = 2 * PI *radius;
	*area =PI * radius * radius ;
}
int main ()
{
	float radius, area, circumference;
	printf("enter the value:");
	scanf("%f" ,&radius);
	calculate_circle(radius,&circumference,&area);
	printf("radius: %.2f\n", radius);
	printf("circumference : %.2f\n",circumference);
	printf("area : %.2f\n",area);
 return 0;
}


