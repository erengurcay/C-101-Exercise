#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 3 karakterli dizi olustur. 2 ile çarpip 2 ekleyip 3 e bölsün cikan sonucu ekrana yaz

int main() 
{
	int i;
	int ern[3];	
	float sum=0;
	int ern2[3];

	for(i=0;i<3;i++)
	{
		printf("Dizi sayilarini gir.");
		scanf("%d",&ern[i]);
	}
	printf("%d\n",ern[0]);
	printf("%d\n",ern[1]);
	printf("%d\n",ern[2]);	
	//	sum=(2*i+2);	
	for(i=0;i<3;i++)
	{	
		ern2[i]=(ern[i]*2)+2;
		
		printf("yeni dizi sayilari:%d\n",ern2[i]);
	}
	
	for (int j=0; j<3;j++)
	{
		sum = sum + ern2[j];
	}
	printf("toplam:%f\n",sum);
	sum = sum/3;
	printf("toplam2:%f\n",sum);
	
	return 0;		

}
