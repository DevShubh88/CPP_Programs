#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	char* ptr;
	printf("Enter the no of elements\n");
	scanf("%d",&n);
	ptr=(char*)malloc(n*sizeof(char)+1);
	printf("Enter the string\n");
	scanf("%s",ptr);
	printf("displaying the string\n");
	printf("%s",ptr);
	free(ptr);
}
