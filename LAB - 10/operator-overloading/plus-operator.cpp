#include<iostream>
using namespace std;
class Complex
{
	int real,img;
	public:
		Complex();
		Complex(int,int);
		void display();
		Complex operator+(Complex&);
		Complex operator-(Complex&);
		Complex operator-();
			
};
Complex::Complex()
{
	real=0;img=0;
}
void Complex::display()
{
	if(img>0)
	{
		cout<<"Complex number : "<<real<<"+"<<img<<"i"<<endl;
	}
	else
	{
		cout<<"Complex number : "<<real<<img<<"i"<<endl;
	}

}
Complex::Complex(int r,int i)
{
	real=r;img=i;
}
Complex Complex::operator+(Complex &c)
{
	Complex temp;
	temp.real=real+c.real;
	temp.img=img+c.img;
	return temp;
}

Complex Complex::operator-(Complex &c)
{
	Complex temp;
	temp.real=real-c.real;
	temp.img=img-c.img;
	return temp;
} 
Complex Complex::operator-()
{
	Complex temp;
	temp.real=(-real);
	temp.img=(-img);
	return temp;
}


int main()
{
	Complex c1(4,6);
	Complex c2(5,5);
	//Complex c3=c1+c2;//Complex c3=c1.operator+(c2); plus operator
	//Complex c3=c1-c2;//Complex c3=c1.operator-(c2); minus operator
	Complex c3=-c1;//Complex c3=c1.operator-()
	
	c3.display();
	return 0;
}
