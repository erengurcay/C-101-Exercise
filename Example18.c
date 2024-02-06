#include<stdio.h>
#include<math.h>

#define PI 3.14159

int main()
{
	float r,alan,cevre;
	printf("yaricap gir.\n");
	scanf("%f",&r);
	alan= PI*r*r;
	printf("alan: %.2f",alan);
	cevre=2*PI*r;
	printf("cevre: %.2f",cevre);
	return 0;
}
