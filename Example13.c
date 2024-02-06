#include<stdio.h>
#include<math.h>

int main()
{
	float para,gun,faiz,total;
	printf("para miktarini gir:  (-1 girersen kod kapanir)\n");
	scanf("%f",&para);
	printf("kac gunluk:(-1 girersen kod kapanir)\n");
	scanf("%f",&gun);
	printf("faiz orani=(-1 girersen kod kapanir)\n");
	scanf("%f",&faiz);
	
	total=(para*gun*faiz)/365;
	printf("%.2f",total);
	return 0;
}
