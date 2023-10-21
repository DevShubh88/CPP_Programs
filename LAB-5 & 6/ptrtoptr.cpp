#include<iostream>
using namespace std;

int main()
{
	int a=10;
	int* b=&a;
	int** c=&b;
	
	
	cout<<a<<*b<<**c<<endl;
	cout<<sizeof(b)<<sizeof(*b)<<sizeof(**c)<<sizeof(a)<<endl;
	}
