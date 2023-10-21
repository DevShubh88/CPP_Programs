#include<iostream>
using namespace std;
class A
{
	public:
		virtual~A()
		{
			cout<<"in a destr";
		}
};
class B:public A
{
	public : 
	~B()
	{
		cout<<"in b destr";
	}
};
int main()
{
	A* aptr = new B();
	delete aptr;
}
