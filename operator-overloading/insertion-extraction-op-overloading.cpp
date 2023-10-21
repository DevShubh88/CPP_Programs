#include<iostream>
using namespace std;

class Complex
{
	int real,img;
	public:
		
		Complex()
		{
			real=0;
			img=0;
		}
		Complex(int r,int i)
		{
			real=r;
			img=i;
		}
		
		friend void operator<<(ostream &out,const Complex &c);
		friend void operator>>(istream &in,Complex &c);
};

void operator<<(ostream &out,const Complex &c)
{
	out<<c.real;;
	out<<"+"<<c.img<<"i";
}
 void operator>>(istream &in,Complex &c)
 {
 	cout<<"Enter real value";
 	in>>c.real;
 	cout<<"Enter img value";
 	in>>c.img;
 }

int main()
{
	Complex c1;
	cin>>c1;
	cout<<"Complex object is : "<<c1;
}
