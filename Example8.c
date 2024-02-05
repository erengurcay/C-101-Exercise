#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c,o;
	float sum1,sum2,sum3;
	float k=1;
	//k= kac litre benzin kullandin g?nde
	
	printf("gunde kac km yol gidiyorsun?\n");
	scanf("%f",&a);
	printf("bir litre benzin fiyati ne kadardir?\n");
	scanf("%f",&b);
	printf("bir litre benzin ile kac km yol aliyorsun?\n");
	scanf("%f",&c);
	printf("gunluk otopark ucreti:\n");
	scanf("%f",&o);
	
	k=a/c;
	printf("kac litre benzin kullandin=\n %f",k);
	
	sum2=(b*k);
	
	sum3=sum2+o;
	printf("\ntotal harcama=\n %f",sum3);
}
