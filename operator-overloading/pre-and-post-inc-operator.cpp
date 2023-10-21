#include<iostream>
using namespace std;
class Complex
{
	int real,img;
	public:
		Complex();
		Complex(int,int);
		void display();
		Complex operator++();
		Complex operator++(int);
		Complex operator-();
};
Complex::Complex()
{
	real=0,img=0;
}
void Complex::display()
{
	if(img>0)
	cout<<"Complex no is"<<real<<"+"<<img<<"i"<<endl;
	else
	cout<<"complex no is "<<real<<img<<"i"<<endl;
}
Complex::Complex(int real,int img)
{
	this->real = real;
	this->img = img;
}
Complex Complex::operator++()
{
	++this->real;
	++this->img;
	return(*this);
}
Complex Complex::operator++(int)
{
	Complex temp = (*this);
	++this->real;
	++this->img;
	return temp;
}
int main()
{
	Complex c1(1,2);
	Complex c2=++c1;
	c1.display();
	c2.display();
	
	Complex c3(5,6);
	Complex c4=c3++;
	c3.display();
	c4.display();
}
