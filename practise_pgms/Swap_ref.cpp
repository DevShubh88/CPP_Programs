#include<iostream>
using namespace std;
void swap(int&,int&);
int main()
{
	int a,b;
	cout<<"enter two values ";
	cin>>a>>b;
	cout<<"before swap a and b "<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<"after swap a and b "<<a<<" "<<b<<endl;
	return 0;
}
void swap(int& p,int& q)
{
	int temp;
	temp=p;
	p=q;
	q=temp;
	
}



