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
		A(int a)
		{
			cout<<"in para of A\n";
			this->a=a;
		}
		
		void display()
		{
			cout<<"in display of A\n";
			cout<<"value of A : " <<a<<endl;

		}
};

class B:public A
{
	int b;
	public:
		B()
		{
			cout<<"in default of B\n";
		}
		B(int b):A(10)
		{
			cout<<"in para of B\n";
			this->b=b;
		}
		
		void display()
		{
			A::display();
			cout<<"in display of B\n";
			cout<<"value of B : " <<b<<endl;

		}
};
int main()
{
	B bobj(20);
	bobj.display();
	cout<<"size of bobj : " <<sizeof(bobj);
	return 0;
}
