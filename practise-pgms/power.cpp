#include<iostream>
using namespace std;

int main()
{
	int pow,n, result=1;
	cout<<"Enter Number ";
	cin>>n;
	cout<<"Enter the Power ";
	cin>>pow;
	for (int i=0;i<pow;i++)
	{
		result=result*n;
	}
	cout<<"Answer : "<<result;
}
