#include<iostream>
using namespace std;

class A
{
	public:
		 A()
		 {
		 	cout<<"\nin B constructor";
		 }
		
		~A()
		{
			cout<<"\nin B destructor";
		}
};

class B:public A
{
	public:
		 B()
		 {
		 	cout<<"\nin C constructor";
		 }
		
		~B()
		{
			cout<<"\nin C destructor";
		}
};

class C:public A
{
	public:
		 C()
		 {
		 	cout<<"\nin A constructor";
		 }
		
		~C()
		{
			cout<<"\nin A destructor";
		}
};
int main()
{
	//A obj;
	B obj1;
	C obj2;
	return 0;
}
