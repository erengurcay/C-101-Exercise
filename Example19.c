#include<stdio.h>
#include<math.h>

int main()
{
	int f;
	int i;
	int faktoriyel=1;
	printf("sayiyi gir.\n");
	scanf("%d",&f);
	
	for(int i = 1; i <= f; i++)
	{
		faktoriyel *= i;
	}
	printf("%d != %d",f,faktoriyel);
return 0;

