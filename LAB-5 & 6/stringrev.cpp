#include<iostream>
#include<string>
using namespace std; 
int main() 
{ 
    int i,length=0;char str[10];
    cout<<"enter a string :";
	cin>>str;
	
	for(i=0;str[i]!='\0';i++)
	{
			length++;
	}
    cout<<"Printing string in reverse\n";
    for(i = length - 1; i >= 0; i--)
    {
      	cout<<str[i];
    }
    return 0;
}
