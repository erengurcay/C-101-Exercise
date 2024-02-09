#include <stdio.h>
#include <stdlib.h>
#include <math.h>



//tek boyutta sayi dizilerini kullanarak olusturulan 5 karakterli bir dizisinde kullanicidan sayilari talep et ve 
//sonrasinda bu sayilarin ortlamasini al

int main(){
	int toplam;
	int ortalama;
	
	
	int ern[5];
	printf("Sayilari gir.\n");
	scanf("%d",&ern[0]);
	scanf("%d",&ern[1]);
	scanf("%d",&ern[2]);
	scanf("%d",&ern[3]);
	scanf("%d",&ern[4]);
		
		for(int i=0; i<5; i++)
	{
		printf("%d\t", ern[i]);	
		toplam += ern[i];
	}		
	ortalama = toplam/5;
	printf("\n\nOrtalama = %d", ortalama);
	
	return 0;
}
