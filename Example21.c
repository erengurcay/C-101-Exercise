#include<stdio.h>
#include<math.h>

int main()
{
	float a;
	float ekstra,total=0;
	printf("urunun degerini gir.\n");
	scanf("%f",&a);
	ekstra=(a*9)/100;
	printf("ekstra deger: %.2f\n",ekstra);
	total=ekstra+200;
	printf("odencek tutar: %.2f\n",total);
	
	return 0;
}
