#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c;
	b=0;
	c=0;

	printf("Bir sayi giriniz:");
	scanf("%d",&a);
	printf("\n");

	while(b<a+1)
		{
	printf("*");
	++b;

	if(b==a)
	{
	printf("\n");
	++c;
	b=0;
	}
	
	{	
	if(c==a)
	b=a+1;
	}
		}

	scanf("%d");
	return 0;
}
