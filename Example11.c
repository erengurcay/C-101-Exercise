#include<stdio.h>
#include<math.h>


int main()
{
	float a;
	float kdv=1;
	float otv=1;
	float total=0;
	float toplam=0;
	printf("urunun vergisiz fiyati nedir?\n");
	scanf("%f",&a);
	
	kdv=(a*18)/100;
	otv=(a*8)/100;
	printf("urunun kdv fiyati=\n %f\n",kdv);
	printf("urunun otv fiyati=\n %f\n",otv);
	total = kdv+otv;
	printf("total vergiler=\n %f\n",total);
	toplam=total+a;
	printf("toplam odenen=\n %f",toplam);
}
