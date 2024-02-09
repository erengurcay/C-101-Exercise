#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int toplam(int x, int ernDegerler)
{
	int toplam = 0;
	int i;
	for(i=1;i<=x;i++)
	{
		printf("%d. Sayiyi gir\t",i);
		scanf("%d", &ernDegerler);
		toplam += ernDegerler;
	}

	printf("Sayilarin toplami: %d", toplam);

}


int main()
{
	int x;
	printf("Dizi sayisini giriniz:");
	scanf("%d",&x);
	int ern[x];
	toplam(x , ern[x]);
	
}

