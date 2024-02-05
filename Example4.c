#include<stdio.h>
#include<math.h>

//Girilen saniyeyi ekrana saat : dakika : saniye olarak yazdiran bir kod yaziniz. 


int main()
{
	int sure;
	int saat;
	int dakika;
	int saniye;
	int a;
 
    printf("saniyeyi gir:\n");
	scanf("%d",&a);
 	
	saniye = a % 60;
	dakika = a % 3600/ 60;
	saat = a / 3600;
	
	printf("%d saniye %d saat %d dakika ve %d saniyedir",a,saat,dakika,saniye);
}
