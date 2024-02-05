#include<stdio.h>
#include<math.h>


//Kullanicidan aldiginiz iki degeri kiyaslayin.

int main()
{
	int a,b;
	printf("1. sayiyi gir:\n");
	scanf("%d",&a);
	printf("2.sayiyi gir:\n");
	scanf("%d",&b);

	if(a<b)
	{
		printf("2.sayi 1.sayidan buyuktur.\n");	
	}
	else if(b<a)
	{
		printf("1.sayi 2.sayidan buyuktur.\n");
	}
	if(a!=b)
	{
		printf("1. sayi 2. sayiya esit degildir.\n");	
	}
	if(a==b)
	{
		printf("1. sayi 2. sayiya esittir.\n");	
	}
	else if(a<=b)
	{
		printf("2.sayi 1.sayidan buyuk veya esittir.\n");	
	}
	else if(a>=b)
	{
		printf("2.sayi 1.sayidan kucuk veya esittir.\n");	
	}

return 0;
}
