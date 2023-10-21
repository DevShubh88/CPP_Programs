#include<iostream>
using namespace std;
void swap(int&,int&);
int main()
{
	int a,b;
	cout<<"enter two values";
	cin>>a>>b;
	swap(a,b);
	cout<<"swapped values are"<<a<<b;
	return 0;
}
void swap(int& p,int& q)
{
	int temp;
	p=temp;
	p=q;
	q=temp;
	
	
}



