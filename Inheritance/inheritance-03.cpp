#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		A()
		{
			cout<<"in default of A\n";
		}
		A(int);
		void display();
};

A::A(int p)
{
	cout<<"in para of A\n";
	a=p;
}
 void A::display()
{
	cout<<"Value of a : "<<a<<endl;

}

class B:public A
{
	int b;
	public:
		
		B(int,int);
		void display();
};
B::B(int p,int q):A(p) //base class initialization list
{
	cout<<"in para of B\n";
	//a=p;not possible coz a is private attribute
	b = q;
}
 void B::display()
 {
 	A::display();
 	cout<<"value of b : "<<b<<endl;
 	
 }


int main()
{
	B bobj(10,20);
	bobj.display();
	return 0;
}
