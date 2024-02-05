#include<stdio.h>
#include<math.h>


//Kullanicidan aldiginiz iki degiskenin toplamasini, ortalamasini, farkini, bolumunun ve 
//iki degerin birbirine bolumunden kalani hesaplayan bir kod yaziniz.

int main()
{
	int x,y;
	int sum;
	int ort;
	int carp;
	int fark;
	float bolum;
	int kalan;
	printf("1.sayiyi gir:");
	scanf("%d",&x);
	printf("2.sayiyi gir:");
	scanf("%d",&y);
	
	sum = x+y;
	printf("sum: %d\n",sum);
	ort = sum/2;
	printf("ortalama: %d\n",ort);
	carp = x*y;
	printf("carpim: %d\n",carp);
	fark = x-y;
	printf("farki: %d\n",fark);
	bolum = x/y;
	printf("bolum: %f\n",bolum);
	kalan = x%y;
	printf("kalan %d\n",kalan);
	return 0;	
}
