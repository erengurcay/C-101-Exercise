#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	char s[]="Eren gurcay\n\n\n\n\n\n\n";
	printf("'%s'", s);
	satirsilme(s);
	printf("silmeden sonra:\n");
	printf("'%s'", s);	
	
	
void satirsilme(char *s)
{
	int a = strlen(s)-1;
	while (a>0)
	{
		if(s[a]=='\n')
			a--;

		else
			break;
	}
	s[a+1]='\0';
}

return 0;
}
