#include<stdio.h>
#include<string.h>
int main()
{
	int x,y=0;

	char s[10];
	char p[10];
	printf("enter the souce string\n");
	scanf("%s",&s);
	
	x=strlen(s)-1;
	printf("string index is %d",x);
	while(x>=0)
	{p[y]=s[x];
	 x--;
	 y++;
	
	
}



	p[y]='\0';
	printf("new revese string is %s",p);
	}	
	
	
	
	
	
	
	
	
	
	
	


