#include<stdio.h>
#include<math.h>

int main()
{
	int a;
	printf("bir sayi gir.");
	scanf("%d",&a);
	
	if(a % 2 == 1)
	{
		printf("tek sayidir");
	}
	else if(a % 2 == 0)
	{
		printf("cift sayidir.");
	}
	return 0;

}
