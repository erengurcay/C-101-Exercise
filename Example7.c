#include<stdio.h>
#include<math.h>


// vke hesaplama

int main()
{
	float a;
	float x;
	float vke;
	printf("kilonu gir:");
	scanf("%f",&a);
	printf("boyunu gir:");
	scanf("%f",&x);
	
	vke = a/(x*x);
	printf("%f\n",vke);
	
	if(vke<=18)
	{
		printf("zayifsin kilo almalisin.");
	}
	if(vke>18 && vke<=21)
	{
		printf("normal durumdasin.");
	}
	if(vke>21 && vke<=24)
	{
		printf("kilolu durumdasin.");
	}
	if(vke>24) 
	{
		printf("çok kilolusun, kilo vermen gerek");
	}
	return 0;
}

