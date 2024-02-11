#include<stdio.h>
#include<math.h>
#include<stdlib.h>
/*
Kullanicidan aldigin dikdörtgenler prizmasinin kenar uzunluklari (a,b), ve yüksekligini(h) kullanarak sirasiyla taban alanini yanal alanlaryni toplami ve
haçmini ekrana yazdiriniz.
*/


	int tabanAlaniHesapla(int a1,int b1){
		
	    return a1*b1;
		
	}
	int yanalAlaniHesapla(int a2,int b2,int h2){
		
		return 2*(a2*h2)+2*(b2*h2);
	}
	int hacimHesapla(int a3,int b3,int h3){
	
		return a3*b3*h3;
}
	
	int main(){
	
	int a,b,h;
	int sonuc,sonuc2,sonuc3;
	
		printf("Lutfen a sayisini giriniz\n");
		scanf("%d",&a);
		printf("Lutfen b sayisini giriniz\n");
		scanf("%d",&b);
		printf("Lutfen h sayisini giriniz\n");
		scanf("%d",&h);

	sonuc = tabanAlaniHesapla(a,b);
	printf("%d\n",sonuc);
	sonuc2 = yanalAlaniHesapla(a,b,h);
	printf("%d\n",sonuc2);
	sonuc3 = hacimHesapla(a,b,h);
	printf("%d\n",sonuc3);
	
	return 0;
}

