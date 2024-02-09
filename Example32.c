#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14
int main()
{
	float x,y,r,alfa;
	printf("Enter cartesian coordinates(x,y):");
	scanf("%f%f\n",&x,&y);
	
	r=sqrt(x*x+y*y);
	
	alfa = atan(y/x);
	alfa = alfa*(180.0/PI);
	
	printf("Polar coordinates(r,theta)=%f %f",r,alfa);
	return 0;
}
