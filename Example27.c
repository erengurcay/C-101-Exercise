#include<stdio.h>
#include<math.h>
#include<string.h>

struct ogrenci
{
   char isim[20];
   char soyisim[20];
   int yas;
};
void yolla (struct ogrenci i)
{
	printf("\nogrenci bilgileri: %s %s %d",i.isim,i.soyisim,i.yas);
}

int main()
{
	struct ogrenci ogrenci1 = {"\nGoktug Eren","Gurcay",22,};
	struct ogrenci ogrenci2 = {"\neren","gurcay",20};
	yolla(ogrenci1);
	yolla(ogrenci2);
	return 0;
}
