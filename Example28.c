#include<stdio.h>
#include<math.h>
#include<string.h>

void RemoveNewLine(char *s){
	int a=strlen(s)-1;
	while(a>0)
	{
		if(s[a]=='\n') 
			a--;
		else 
			break;
	}
	s[a+1]='\0';
}

int main(){
	char s[]="Goktug Eren Gurcay\n\n\n\n\n";
	
	printf("'%s'", s);
	
	RemoveNewLine(s);
	
	printf("\nAfter deletion:\n");
	printf("'%s'", s);
	return 0;
}
