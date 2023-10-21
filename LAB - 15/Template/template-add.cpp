#include<iostream>
using namespace std;

template <class T>
T add(T&a,T&b)
{
	T result = a+b;
	return result;
}
int main()
{
	int a =10;
	int b = 20;
	float c = 30;
	float d = 40;
	
	cout<<add(a,b)<<endl;
	
	cout<<add(c,d);
}
