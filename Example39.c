#include <stdio.h>
#include <stdlib.h>
#include <math.h>




//Belirtilen dizideki yaslarin ortalamasini alsin.

int toplam(int a, int yaslar)
{
	int toplam=0;
	int ortalama;
	int i;
	for(i=1;i<=a;i++)
	{
		printf("%d. kisinin yasini giriniz\t",i);
		scanf("%d",&yaslar);
		toplam += yaslar;
		ortalama=toplam/ a;
	}
	printf("Yaslarin toplami %d\n",toplam);
	printf("Yaslarin ortalamasi %d",ortalama);
}

int main()
{
	int a;
	printf("Kisi sayisini girin:");
	scanf("%d",&a);
	int ern[a];
	toplam(a, ern[a]);
}
