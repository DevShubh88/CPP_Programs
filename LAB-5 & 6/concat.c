#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10],s2[10];
	int length=0,i=0,j=0;
	printf("Enter the 1st valid string ");
	scanf("%s",&s1);
	printf("Enter the 2nd valid string ");
	scanf("%s",&s2);
	
	while(s2[j]!='\0')		
	{
		s1[i]=s2[j];
		j++;
		i++;
	}
	 
  // s2[i]='\0';
   	printf("concatenated string %s",s1);

   return 0 ;
}
	
