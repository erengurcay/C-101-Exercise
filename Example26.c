#include<stdio.h>
#include<math.h>
#include<string.h>

struct ogrenci
{
   char isim[20];
   char soyisim[20];
   int numara;
};

int main()
{
struct ogrenci ogrenciler[3];
   int i;
  for (i=0;i<3;i++) 
  {
     printf("%d inci ogrencinin bilgilerini girin\n",i+1);
     scanf("%s %s %d" ,&ogrenciler[i].isim,&ogrenciler[i].soyisim,&ogrenciler[i].numara);
  }

  for (i=0;i<3;i++)
  {
  	printf("%d ninci ogrencinan bilgileri %s %s %d\n",i+1,ogrenciler[i].isim,ogrenciler[i].soyisim,ogrenciler[i].numara);
  }

 return 0;

}
