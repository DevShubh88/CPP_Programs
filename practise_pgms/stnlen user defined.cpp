#include<stdio.h>
int my_strnlen(char* p);

int main()
{
	int len;
	char name[30];
	printf("enter your name");
	gets(name);
	
	len = my_strnlen(name);
	
	printf(" lenth of your name is %d ", len);
	
	return 0;
}
	int my_strnlen(char * p)
	{
		int count = 0;
		while(*p !='\0')
		{
			count++;
			p++;
		}
		return count;
	}
	
