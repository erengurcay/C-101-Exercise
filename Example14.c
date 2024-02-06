#include<stdio.h>
#include<math.h>


int main()
{
	int a,i;
	printf("bir sayi gir:");
	scanf("%d",&a);
	
	for(i=2;i<a;i++)
	{
		if(a % i == 0)
		{
			printf("%d asal sayi degildir.",a);
	
			break;
		}
		if(a%i!=0)
		{
			printf("%d asal sayidir",a);
			break;
		}	
 	}
	return 0;
}
