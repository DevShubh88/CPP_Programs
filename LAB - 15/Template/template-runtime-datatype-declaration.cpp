#include<iostream>
using namespace std;

template <class T1,class T2>
class A
{
	T1 a;
	T2 b;
	public:
	A(T1 x,T2 y){
		a = x;
		b = y;
	}
	void display()
	{
		cout<<"values of a and b is : "<<a<<" "<<b<<endl;
	}
	
};

int main()
{
	A<int ,float> d(10,2.3f);
	d.display();
	return 0;
}
