#include<stdio.h>
//#include<string>
int main() 
{ 
    int i,length=0;char str[10];
    printf("enter a string :");
	scanf("%s",&str);
	
	for(i=0;str[i]!='\0';i++)
	{
			length++;
	}
    printf("Printing string in reverse\n");
    for(i = length; i >= 0; i--)
    {
      	printf("%s",&str[i]);
    }
    return 0;
}
