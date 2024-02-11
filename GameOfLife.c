#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>


#define TableSize 9  
#define NumberOfMine 5 
#define win 1
#define lose -1
#define maintain 0 


char Image [TableSize+2][TableSize+2];


int GeneralTable [TableSize+2][TableSize+2];

int mine,y=0;    
int count = 0;


void CreateLowerTable ();
void FirstStartTable ();

void PrintLowerTable ();
void PrintTable();
void LayMine ();
int CheckMatchWin();

void Sleuth(int line,int column);
int Dig(int line,int column);

int main(void)
{
	int line, column;
	int progress, again;  
    char act;
    
	printf ("\t\t\t\t\tWELCOME TO THE MINEFIELD GAME\n\n");
	
    CreateLowerTable();
    FirstStartTable();
    
    do
    {
        PrintTable();
        printf("\n");
        
        printf ("\nd=dig\nf=flag\nr=remove flag\n\n");
        
        printf("Please enter in the following order: d, line, column or f,line, column or r, line, column\n");
        scanf("%c,%d,%d",&act,&line,&column);
        printf("\n");

        if (act == 'd')
        {

            progress=Dig(line,column);
        }
        else if (act == 'f')
        {
            if(mine > count)
            {
                count++;
                Image[line][column]='F';
                progress=CheckMatchWin();
            }
        }
        
        else if (act == 'r')
        {
            if (count > 0)
            {
                count--;
            }
            Image[line][column]='#';
            progress=Dig(line,column);
        }

        if (progress == lose)
        {
            printf("YOU'RE LOSE!!!\n");
            PrintLowerTable();
            printf("PLAY AGAIN? [1 - YES] [0 - LOSE] \n");
            scanf("%d",&again);
            
            switch (again)
            {
            case 0:
                printf("SEE YOU NEXT GAME\n");
                return 0;
                break;
                
            case 1:
                count=0;
                progress=maintain;
                CreateLowerTable();
                FirstStartTable();
                break;
                
            default:
                printf("ENTER THE WRONG INPUT!!\n");
                break;
            }
        }

        if (progress == win)
        {
        	printf ("APPLAUSE, YOU'RE WIN!!\n");
			PrintLowerTable();
			
			printf ("PLAY AGAIN? [1 - YES] [0 - LOSE]\n");
			scanf ("%d", &again);
            
            switch (again)
            {
            case 0:
                printf("SEE YOU NEXT GAME\n");
                return 0;
                break;
                
            case 1:
                count=0;
                progress=maintain;
                CreateLowerTable();
                FirstStartTable();
                break;
                
            default:
                printf("ENTER THE WRONG INPUT!!\n");
                break;
            }

        }

    }while(1);
    
    return 0;
}

void CreateLowerTable()
{
	int i, j, mine;

	for (i=0; i<=TableSize+1; i++)
	{
		for (j=0; j<=TableSize+1; j++)
		{
			GeneralTable[i][j]= 0;
		}
	}
	
	for (i=0; i<=TableSize; i++)
	{
		GeneralTable[i][0]= 1;
		GeneralTable[i][TableSize+1]= 1;
	}
	
	for (j=0; j<=TableSize; j++)
	{
		GeneralTable[0][j]= 1;
		GeneralTable[TableSize+1][j]= 1;
	}
	
    mine = NumberOfMine;
	LayMine();
}

void FirstStartTable()
{
	int i, j;

	for (i=0; i<=TableSize+1; i++)
	{
		for (j=0; j<=TableSize+1; j++)
		{
			Image[i][j]= '#';
		}
	}
	
	for (i=0; i<=TableSize; i++)
		{
			Image[i][0]= '*';
			Image[i][TableSize+1]= '*';
		}
		
	for (j=0; j<=TableSize; j++)
		{
			Image[0][j]= '*';
			Image[TableSize+1][j]= '*';
		}

}

void PrintTable()
{
	int i, j;
	printf("\n");
	
	for (i=1; i<=TableSize; i++)
	{
		printf("%3d",i);
	}
	printf("\n");

	for (i=1; i<=TableSize; i++)
	{
		printf("---");
	}
	printf("\n");

	for (i=1; i<=TableSize; i++)
	{
		for(j=1; j<=TableSize; j++)
		{
			printf("%3c",Image[i][j]);
		}
		printf(" |%d", i);
		printf("\n");
		
	}
	
	for (i=1;i<=TableSize;i++)
	{
		printf("___");
	}
}

void PrintLowerTable()
{
	int i, j;
	printf("\n");
	
	for (i=1; i<=TableSize; i++)
	{
		printf("%3d",i);
	}
	printf("\n");

	for (i=1; i<=TableSize; i++)
	{
		printf("---");
	}
	printf("\n");
	
	for (i=1; i<=TableSize; i++)
	{
		for(j=1; j<=TableSize; j++)
		{
			printf("%3d",GeneralTable[i][j]);
		}
		printf(" |%d",i);	
		printf("\n");
		
	}
	
	for (i=1; i<=TableSize; i++)
	{
		printf("___");
	}
	printf("\n");
	
}

void LayMine()
{
	srand(time(NULL)); 
	int i, j, k, p, line, column;
	mine = NumberOfMine;

	for (i=1; i<=mine; i++)
	{
		line = 1 + rand()%TableSize; 
		column = 1 + rand()%TableSize; 
		if (GeneralTable[line][column] == -1)
		{
			i--;
		}
			
		GeneralTable[line][column]= -1;
		
		for (k=-1; k<=1; k++)
		{
        	for (p=-1; p<=1; p++)
			{
               	if (GeneralTable[line][column]==-1)
				{
           			if (GeneralTable[line+k][column+p]!=-1)
                	{	
						
                        GeneralTable[line+k][column+p]++;
                    }
                }
            }
        }
    } 
}

int CheckMatchWin()
{
	int i,j,y=0,state;
	
	for (i=1; i<=TableSize; i++)
	{
        for (j=1; j<=TableSize; j++)
        {
        	
            if(Image[i][j] == 'F')
			{
                if (GeneralTable[i][j] == -1)
                {
                    y++;
                }
			}

        }
	}
	
	if (y == NumberOfMine)
	{
		state=win;
	}
	
	else
		state=maintain;

	return state;
}

void Sleuth(int line, int column)
{  
	int i, j;

	
	Image[line][column] = '0' + GeneralTable[line][column];

	for (i = -1; i <= 1; i++) 
	{
		for (j = -1; j <= 1; j++) 
		{	
			if (GeneralTable[line + i][column + j] > 0 && Image[line + i][column + j] == '#')
			{
				Image[line + i][column + j] = '0'+ GeneralTable[line + i][column + j];
			}
			
			else if (GeneralTable[line + i][column + j] == 0 && Image[line + i][column + j] == '#')
			{
				Sleuth(line+i, column+j);
			}
		}
	}
}

int Dig(int line, int column)
{
	int x=0;
    if (GeneralTable[line][column] == -1)
    {
    	x=lose;
    }

    else if (GeneralTable[line][column] > 0)
    {
        Image[line][column] = ('0' + GeneralTable[line][column]);

        x=maintain;
	}
    else
    {
    	Sleuth(line, column);

    }

    return x;
}


