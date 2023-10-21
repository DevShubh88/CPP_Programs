#include <iostream>
using namespace std;
void swap(int*, int*);
int main()
{
	int a, b;
	cout<<"Enter values of a and b";
	cin>>a>>b;
	cout<<"Before swaping the values are"<<a<<b;
	swap(a,b);
	cout<<"In main after swaping values are"<<a<<b;
}
void swap(int* p , int* q)
{
	int temp = *p;
	*p = *q;
	*q = temp;
	cout<<"after swaping values are"<<*p<<*q;
}
