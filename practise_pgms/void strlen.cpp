 #include<stdio.h>
 void my_strnlen(char* p);

int main()
{
	int len;
	char n[30];
	printf("enter your name");
	scanf("%s",&n);
	
	my_strnlen(n);
	
	
	return 0;
}
	void my_strnlen(char * p)
	{
		int count = 0;
		while(*p !='\0')
		{
			count++;
			p++;
		}
	printf(" lenth of your name is %d ", count);
		
	}
	
