#include<stdio.h>
#include<math.h>
#include<string.h>

//kullanicidan 3 deger al,3 degern de kokunu al,kokunu aldigin degerlerin 3.kuvvetini bul.

void process(float g,float e,float r){

	
	float sum =0;
	float sum2=0;
	float sum1=0;
	float sum3=0;
	float sum4=0;
	float sum5=0;
	sum = sqrt(g);
	sum1 = sqrt(e);
	sum2= sqrt(r);
	sum3= pow(sum,3);
	sum4= pow(sum1,3);
	sum5= pow(sum2,3);
	printf("%.2f\n",sum3);
	printf("%.2f\n",sum4);
	printf("%.2f\n",sum5);
}
int main()
{
	float i,j,a;
	
	printf("1.sayi:\n");
	scanf("%f",&i);
	printf("2.sayi:\n");
	scanf("%f",&j);
	printf("3.sayi:\n");
	scanf("%f",&a);
	
	process(i,j,a);
	return 0;
}
