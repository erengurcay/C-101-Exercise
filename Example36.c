#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//3*4 karakterli iki dizi olustur bu dizilerin toplamini yap  ve ekrana olusacak 3. dizinin degerlerini matrix düzeni ile yaz

int main()
{
	
	int ern_1[3][4]={{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
	int ern_2[3][4]={{13,14,15,16},{17,18,19,20},{21,22,23,24}};
	int sum[3][4],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			sum[i][j] = ern_1[i][j] + ern_2[i][j];
			printf("%d + %d = %2d\n", ern_1[i][j], ern_2[i][j], sum[i][j]);
		}	
		printf("\n");
	}
	printf("3.dizi\n");
		for(int i=0; i<3; i++)
		
		{
			for(int j=0; j<4; j++)
			{
				sum[i][j] = ern_1[i][j] + ern_2[i][j];
				printf("%d ", sum[i][j]);
			}
			printf("\n");
	
		}

	return 0;


}
