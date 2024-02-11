#include<stdio.h>
#include<math.h>
#include<stdlib.h>


/*
Isçi ücreti 200 tl olan ve metreksresi sirasi ile a=18, b=24, c=32 tl olan 3 farkli halidan kullanicinin hangisini talep ettigini 
seçtiriniz ve kullanicidan oda ölçülerini alarak seçtigi hali modeline göre fiyat sununuz.(fonkisyon ve define kullaniniz)
*/


#define halia 18
#define halib 24
#define halic 32

int main(){
	
	char hali;
	float en,boy;
	float metrekare,sonuc,sum;
	
	printf("Hangi turde hali istersiniz(normal a),(kaliteli b), (yuksek kalite c)?\n");
	scanf("%c",&hali);
	
	printf("Lutfen odanin boy uzunluklarini giriniz.(en/boy)\n");
	scanf("%f %f",&en,&boy);
	
	

	if (hali == 'a'){
		sonuc =	en*boy*halia+200;	
}
	else if(hali == 'b'){
		sonuc =en*boy*halib+200;
	}	
	else if(hali == 'c'){
		sonuc = en*boy*halic+200;
}
	else {
}
	
	printf("%.2f'tl dir.",sonuc);
	
	return 0;
}




