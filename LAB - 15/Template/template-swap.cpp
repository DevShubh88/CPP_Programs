#include<iostream>
using namespace std;

template<class T>
void swapp(T &x,T &y)
{
	T t;
	t=x;
	x=y;
	y=t;
	
}
int main()
{
	int i=3,j=4;
	cout<<"Before swapping values are : "<<i<<" & "<<j<<endl;
	swapp(i,j);
	cout<<"After swapping values are : "<<i<<" & "<<j;
}
