#include<iostream>
using namespace std;
class A
{
	int c;
	protected:
		int b=20;
	public:		
		int a=10;
		void display()
		{
			cout<<"in display of A\n";

		}
};
class B:private A
{
	public:
		void show()
		{
			cout<<a<<b;//becomes private in derived class

		}
};

class C:private B
{
	public:
		void show()
		{
			cout<<a<<b;//error->private data isnt accessible

		}
};

int main()
{
	B bobj;
	bobj.show();
	
	bobj.display();//error
	
	C cobj;
	cobj.show();//error
	return 0;
}
