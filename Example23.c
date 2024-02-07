#include<stdio.h>
#include<math.h>
#include<string.h>

void fonk1(float e,float r,float g,float n)
{
		

	float sum2=0;
	float sum=0;
	float ussu1=0,ussu2=0;
	
	ussu1=pow(e,g);
	ussu2=pow(r,n);
	sum = ussu1+ussu2;
	sum2 = sum/3;
	printf("uslerin toplami:%f",sum);
	printf("\nbolu3:%f",sum2);

}
int main()
{
	float sum2=0;
	float sum=0;
	float ussu1,ussu2;
	float i,j,a,b;
	printf("1.sayi:");
	scanf("%f",&i);
	printf("2.sayi:");
	scanf("%f",&j);
	printf("3.sayi:");
	scanf("%f",&a);
	printf("4.sayi:");
	scanf("%f",&b);
//	ussu1=pow(i,a);
//	ussu2=pow(j,b);
//	sum = ussu1+ussu2;
//	sum2 = sum/3;
	
	
	fonk1(i,j,a,b);


//	printf("ussu1=%f\n",ussu1);
//	printf("ussu2=%f\n",ussu2);
//	printf("toplam=%f\n",sum);
//	printf("sonuc=%.2f\n",sum2);
	
	return 0;
}
