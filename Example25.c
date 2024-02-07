#include<stdio.h>
#include<math.h>
#include<string.h>


int asal_sayi(int sayi)
{
	int i;
	for(i=2;i<sayi;i++)
	{
		if(sayi%i==0)
		{
			return 0;
		}
		else if(sayi%i!=1)
		{
			return 1;
		}
	}
}
int main()
{
	int a;
	printf("sayi gir:\n");
	scanf("%d",&a);
	
	if(asal_sayi(a )== 0)
	{
		printf("bu sayi asal degildir");
	}
	else 
	{
		printf("bu sayi asaldir");
	}
return 0;
}
