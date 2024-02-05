#include<stdio.h>
#include<math.h>


int main()
{
	int x,y,z;
	int sum;
	int ort;
	int carp;
	int fark;
	int kalan;
	
	printf("1.sayiyi gir:");
	scanf("%d",&x);
	printf("2.sayiyi gir:");
	scanf("%d",&y);
	printf("3.sayiyi gir:");
	scanf("%d",&z);
	
	sum = x+y+z;
	printf("sum: %d\n",sum);
	ort = sum/3;
	printf("ortalama: %d\n",ort);
	kalan = sum%3;
	printf("kalan: %d\n",kalan);
	carp = x*y*z;
	printf("carpim: %d\n",carp);
	fark = x-y-z;
	printf("farki: %d\n",fark);
	
	if(x>y && x>z)
	{
		printf("x sayisi en buyuktur.\n");	
	}
	else if(y>z && y>z )
	{
		printf("y sayisi en buyuktur.\n");
	}
	else if(z>x && z>y)
	{
		printf("z sayisi en buyuktur.\n");	
	}
	if(x<y && x<z)
	{
		printf("x sayisi en kucuktur.\n");	
	}
	else if(y<z && y<z )
	{
		printf("y sayisi en kucuktur.\n");
	}
	else if(z<x && z<y)
	{
		printf("z sayisi en kucuktur.\n");	
	}
	else if(z==x && z==y)
	{
		printf("butun sayilar esittir\n");	
	}
	else if(z==x && z>y)
	{
		printf("z sayisi ve x sayisi en b?y?kt?r.\n");	
	}
	else if(x==y && y>z)
	{
		printf("x ve y sayisi en buyuktur.\n");	
	}

	return 0;
}
