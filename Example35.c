#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//9*9 boyutta dizilerde 1 olan kisimi '+' isaretli 0 olan konumlari '-' ile doldurun kare olusturun

int main(){
	int ern[9][9];
	int i,j;
	int arti = 43;
	char c = arti;	
	int eksi = 45;
	char a = eksi;
	
	for (i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			if((i<1 || j<1) || (i>7 || j>7) || (i==j))
			{
				ern[i][j]=43;
			}
			else
			{
				ern[i][j]=45;
			}
			printf("%2c", ern[i][j]);
		}
			printf("\n");
	}
	
	return 0;
	
}


