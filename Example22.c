#include<stdio.h>
#include<math.h>


int main()
{
	int a=1;
	int i=1;
	int n;
	int c=1;
	printf("satir sayisini gir:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(c=1;c<=i;c++)
		{
			 printf("%d ",a);
      		 a++;
		}
		printf("\n");
	}
	return 0;
}
