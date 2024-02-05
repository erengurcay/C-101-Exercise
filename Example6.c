#include<stdio.h>
#include<math.h>


int main()
{
	int karesi,kup;
	int i;
	while(i<=10)
	{
	kup=i*i*i;
	karesi=i*i;
	printf("%d %d %d \n",i,karesi,kup);
	i++;
	}
	return 0;
}
