#include<stdio.h>
#include<string.h>


int main()
{
	char a[15]="my name is";
	char b[15]=" atharva";
	
	printf("a before : %s \n",a);
	
	strcat(a,b);
	printf(" a after  : %s ",a);
	return 0;
}
