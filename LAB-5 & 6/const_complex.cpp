#include<iostream>
using namespace std;

class Complex
{
	int real,img;
	public:
		
		/*Complex()
		{
			real=1;
			img=2;
		}
		*/
		
		Complex(int r,int i)
		{
			real=r;
			img=i;
		}
		void getData()
		{
			cout<<"enter the real and imaginary values";
			cin>>real>>img;			
		}
		void display() const
		{
			cout<<"complex no is :"<<real<<"+"<<img<<"i"<<endl;
		}				
		void setReal(int r)
		{
			real=r;
		}	
		void setImg(int i)
		{
			img=i;
		}		
		int getReal() const
		{
			return real;
		}
		int getImg() 
		{
			return img;
		}
		
};
/*	Complex::Complex(int r,int i)
	{
			real=r;
			img=i;
		}
		*/
int main()

{
 //const Complex c1;
 /*cout<<c1.getReal();
  cout<<c1.getImg();
  c1.display();
*/
 const Complex c1(4,5);
c1.display();
 return 0;
	
}



