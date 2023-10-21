#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,sum = 0;
	int* ptr;
	printf("Enter the no of elements\n");
	scanf("%d",&n);
	ptr = (int*) malloc(n*sizeof (int));
	printf("Accept elements for the array");
	for(int i = 0; i<n ; i++)
	scanf("%d",(ptr+i));
	for(int i = 0;i<n; i++)
	sum = sum + *(ptr+i);
	printf("summation = %d \n",sum);
	free(ptr);
	printf("Dynamic memory disallocated in after free\n");

}
