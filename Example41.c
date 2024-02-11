#include <stdio.h>
#include <math.h>
#define PI 3.14

int main()
{
	float x, y, r, alfa;
	printf ("Enter polar coordinates (r, alfa):\n");
	scanf ("%f%f", &r, &alfa);
	
	alfa = alfa * (PI/180.0);
	
	x = r * cos(alfa);
	y = r * sin(alfa);
	
	printf ("Cartesian coordinates (x, y) are (%f, %f)\n", x, y);
	
	return 0;
}
