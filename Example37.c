#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Ogrenci ortalamasi
int main()
{
	
	int ogrenciler;
	int notlar;
	
	printf("Ogrenci sayisini giriniz:");
	scanf("%d",&ogrenciler);
	printf("Sinav sayisini giriniz:");
	scanf("%d",&notlar);
	
	int degerler[ogrenciler][notlar];
	int toplam[ogrenciler];
	
	for(int i=0;i<ogrenciler;i++)
	{
		toplam[i]=0;
		for(int j=0;j<notlar;j++)
		{
			printf("%d. ogrencinin %d. Notu=\t",i+1,j+1);
			scanf("%d",&degerler[i][j]);
			toplam[i]+=degerler[i][j];
		}
	}
	for(int i=0;i<ogrenciler;i++)
	{
		for(int j=0;j<notlar;j+=notlar)
		{
			printf("%d. ogrencinin ortalamasi: %d\n ", i+1, toplam[i] / notlar);
			
		}
	}

	return 0;	
}

