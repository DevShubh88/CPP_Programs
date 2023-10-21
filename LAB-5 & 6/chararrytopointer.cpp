#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char* names[5]={"rohan","ram","hi","k","cam"};
	for (int i=0;i<=5;i++)
	{
		
		cout<<names[i]<<endl;
		cout<<(names+i)<<endl;
		cout<<*(names+i)<<endl;
	
		int x=strlen(names[i]);
			for (int j=0;j<=x;j++)
			{
				cout<<*(*(names+i)+j)<<endl;

			}
		
	}
}
