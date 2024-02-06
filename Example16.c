#include<stdio.h>
#include<math.h>

int main()
{
	int karesi,kup,dorduncukuv;
	int i;
	while(i<=10)
	{
	karesi=pow(i,2);
	kup=pow(i,3);
	dorduncukuv=pow(i,4);
	printf("%d %d %d %d \n",i,karesi,kup,dorduncukuv);
	i++;
	}
	return 0;
}
