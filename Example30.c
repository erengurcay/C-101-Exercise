#include<stdio.h> 
int sitem(int sas)
{
	int bakiye = 1000;
	int tutar;
	int hatali;
	char isim;
	switch(sas){
		
		case 1:
			printf("Bakiyeniz: %d\n",bakiye);
			printf("Para cekilecek tutar:\n");
			scanf("%d",&tutar);
			if(tutar>bakiye){
				printf("Bakiye yetersiz.\n");
			}
			bakiye -= tutar;
			printf("Yeni bakiyeniz: %d",bakiye);
			break;
		case 2:
			printf("Bakiyeniz: %d\n",bakiye);
			printf("Para yatirilicak tutar:\n");
			scanf("%d",&tutar);
			bakiye += tutar;
			printf("Yeni bakiyeniz: %d",bakiye);
			break;
		
		case 3:
			printf("Bakiyeniz: %d\n",bakiye);
			printf("Havale yapilacak tutar:\n");
			scanf("%d",&tutar);
			printf("Havale yapilacak hesap isim:\n");
			scanf("%d",&isim);
			
			
			if(tutar>bakiye)
			{
				printf("Bakiye yetersiz.\n");
				break;
			}
			
			bakiye -= tutar;
			printf("Yazdiginiz hesap adina para gonderilmistir.\n");
			printf("Yeni bakiyeniz: %d",bakiye);
			break;
		
		case 4:
			printf("Bakiyeniz: %d\n",bakiye);
			break;
		
		default:	
		printf("Bilinmeyen islem");
		break;
	}	
}

int main()
{
	int islem;
	int sifre;
	
	printf("Lutfen 4 haneli sifreni gir lale.\n");
	scanf("%d",&sifre);
	int i = 1;
	while(sifre != 2222 && i<3)
	{
		printf("Tekrar deneyiniz\n");
		printf("Lutfen 4 haneli sifrenizi giriniz.\n");
		scanf("%d",&sifre);
		i++;
	}
	if(i == 3)
	{
		printf("Sifre Yanlýs");
		exit(0);
	}
	
	printf("Islemler\n1=Para cekme\n2=Para yatirma\n3=Havale yapma\n4=Bakiye Sorgulama\n\n\n\n");
	scanf("%d",&islem);
	sitem(islem);
	
	return 0;
}
