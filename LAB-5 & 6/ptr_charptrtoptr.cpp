#include<iostream>
using namespace std;

int main()
{
	char a='A';
	char* b=&a;
	char** c=&b;
	
	
	cout<<a<<*b<<**c<<endl;
	cout<<sizeof(b)<<sizeof(*b)<<sizeof(**c)<<sizeof(*c)<<endl;
	}
