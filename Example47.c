#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main ()
{
	int array_1[3][6]={{7,8,5,4,7,5}, {4,2,3,9,5,1}, {8,5,2,4,3,8}};
	int array_2[3][6]={{5,8,7,4,3,5}, {4,2,1,9,8,1}, {8,3,2,8,3,8}};
	int sum[3][6], i, j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<6; j++)
		{
			sum[i][j] =  array_1[i][j] + array_2[i][j];
		}
	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<6; j++)
		{
			printf (" %d + %d =%3d ", array_1[i][j], array_2[i][j], sum[i][j]);
		}
		printf ("\n");
	}
	
	
	return 0;
}
