#include <stdio.h>
#include <string.h>
#include <conio.h>

struct kayit{
 char isim[30];
 char soyisim[21];
 char tel[11];
};

void menuHazirla()
{
printf("**********************************************************\n");
printf("* Telefon Rehberi\n");
printf("* 1-Telefon Numarasi Ekle\n");
printf("* 2-Telefonlari Listele \n");
printf("* 3-Arama Yap \n");
printf("* 4-Cikis \n");
printf("**********************************************************\n");
}
int telefonEkle()
{
struct kayit yeniKayit;
FILE *ptr;
if ((ptr = fopen("telefondefteri.txt", "a")) == NULL)
{
  return -1;
}
printf("\n\n");
printf("isim giriniz:");
scanf("%s", yeniKayit.isim);

printf("\nsoy isim giriniz :");
scanf("%s", yeniKayit.soyisim);

printf("\ntelefon numarasini giriniz :");
scanf("%s", yeniKayit.tel);

fprintf(ptr, "\n%s\t%s\t%s", yeniKayit.isim, yeniKayit.soyisim, yeniKayit.tel);
fclose(ptr);

return 0;
}

int telefonlariListele()
{
FILE *ptr;
struct kayit aktifKayit;
if ((ptr = fopen("telefondefteri.txt", "r")) == NULL)
{
  return -1;
}
printf("\n\nisim\t\tsoyisim\t\ttel\n");
while (!feof(ptr))
{
fscanf(ptr, "%s%s%s", &aktifKayit.isim, &aktifKayit.soyisim, &aktifKayit.tel);
printf("%s \t\t", aktifKayit.isim);
printf("%s \t\t", aktifKayit.soyisim);
printf("%s \t\t\n", aktifKayit.tel);
}
fclose(ptr);
return 0;
}

int aramaYap(char *arananIsim)
{
FILE *ptr;
struct kayit aktifKayit;
int bulunan = 0;
if ((ptr = fopen("telefondefteri.txt", "r")) == NULL)
{
return -1;
}
while (!feof(ptr))
{
fscanf(ptr, "%s%s%s", &aktifKayit.isim, &aktifKayit.soyisim, &aktifKayit.tel);

if (!strcmp(arananIsim, aktifKayit.isim))
{
printf("%s\t\t", aktifKayit.isim);
printf("%s\t\t", aktifKayit.soyisim);
printf("%s\t\t", aktifKayit.tel);
}
  bulunan++;
}
 fclose(ptr);
 return bulunan;
}



int main()
{
char secim = '0';
char aranacakIsim[16];
int numaraAra = -1;
menuHazirla();
do{

printf("\n\nsecimin:");
secim = putchar(getchar());


switch (secim)
{
	case'1':
 		if (telefonEkle() == 0)
		{ 
		printf("\ntelefon numarasi basariyla eklendi.");
		}
 		else
		{ 
		printf("\nHata: telefon numarasi eklenemedi!"); 
		}
 		break;
	case'2':
 		if (telefonlariListele() == 0)
		{ 
		printf("\ntelefon  basariyla listelendi."); 
		}
 		else
		{ 
		printf("\nHata: telefon numaralary listelenemedi!"); 
		}
 		break;
	case'3':
		{
  	 	printf("\n aranacak ismi giriniz:");
   		scanf("%s", aranacakIsim);
   		numaraAra = aramaYap(aranacakIsim);
		
		if (numaraAra == 0)
		{ 
		if (numaraAra>0)
     	printf("\ntoplam %d kayit bulundu.", numaraAra);
    	else
     	printf("\nHata: numara aranamadi!:");
	    }
   else
   {
    printf("\naranan isim kayitlarda bulunamadi."); 
   }
   
   }
		 break;
case'4':
 printf("\ncikis yapildi");
 return 0;
 break;
default:
 printf("\nlutfen 1-4 arasinda secim yap:");
  }
 } while (secim != 4);
 return 0;
}
