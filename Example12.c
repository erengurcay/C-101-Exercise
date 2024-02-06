#include<stdio.h>
#include<math.h>

int main()
{
	float yil,faiz;
	float para,aylikarts;
	float ay,total;

	printf("para miktarini gir:  (-1 girersen kod kapanir)\n");
	scanf("%f",&para);
	printf("kac yillik:(-1 girersen kod kapanir)\n");
	scanf("%f",&yil);
	printf("faiz orani=(-1 girersen kod kapanir)\n");
	scanf("%f",&faiz);

	int counter=0;
	while((para == -1) || (yil == -1) || (faiz == -1))
	{
		if((para == -1) || (yil == -1) || (faiz == -1))
		{
			break;
		}
		
	}
	ay=yil*12;
	aylikarts=para*1*faiz;
	printf("%.2f\n",aylikarts);
	total=(para*ay*faiz)+para;
	printf("%.2f",total);
	
	return 0;
}
