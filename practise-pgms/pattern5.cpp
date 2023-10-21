#include<iostream>
using namespace std;
int main()
{
	int r, c;	int n=1;
	cout << "Enter the number of rows : ";
	cin>> r;
	cout << "Enter the number of columns : ";
	cin>> c;
	for(int i=1; i<=r; i++)        //for(int i=r; i>0; i--)
	{
		for(int j=c; j>=i; j--)  //for(int j=0; j<i; j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
