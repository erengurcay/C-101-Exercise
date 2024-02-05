#include<stdio.h>
#include<math.h>


int main()
{
	float a;
	float desi,metre,hekta,deka,kilo;
	printf("cm yi gir\n");
	scanf("%f",&a);
	desi = a/10;
	printf("desi: %f\n",desi);
	metre = desi/10;
	printf("metre :%f\n",metre);
	hekta = metre/10;
	printf("hekta: %f\n",hekta);
	deka= hekta/10;
	printf("deka: %f\n",deka);
	kilo= deka/10;
	printf("kilometre: %f\n",kilo);
}
