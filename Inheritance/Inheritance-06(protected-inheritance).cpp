#include<iostream>
using namespace std;
class A
{
	int c=30;
	protected:
		int b=20;
	public:		
		int a=10;
		void display()
		{
			cout<<"in display of A\n";

		}
};
class B:protected A
{
	public:
		void show()
		{
			cout<<"values of a and b : "<<a<<" & "<<b<<endl;//becomes protected in derived class

		}
};

class C:protected B
{
	public:
		void show()
		{
			cout<<"values of a and b : "<<a<<" & "<<b<<endl;//error->becomes protected in derived class

		}
};

int main()
{
	B bobj;
//	bobj.show();//a=10,b=20
	
	bobj.display();//error
	
	C cobj;
//	cobj.show();//a=10,b=20
	return 0;
}
