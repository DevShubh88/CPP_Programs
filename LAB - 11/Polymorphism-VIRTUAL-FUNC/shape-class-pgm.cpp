#include<iostream>
using namespace std;
class shape
{
	public :
	//	void display();
//		shape()
//		{
//			cout<<"in default of shape";
//		}
		virtual float Area()
		{
			cout<<"hi";
			return 0;
		}
		
};

class square:public shape
{
	public:
		int side;
		float area;
		square();
		square(int);
		float Area();	
		void display();
};

square::square()
{
	cout<<"in default of square";
	side=0;
}

square::square(int s)
{
	cout<<"in para of square\n";
	side=s;
}
float square::Area()
{
	return side*side;
}
void square::display()
{
	cout<<"Area of square: "<<area;
}



class rectangle:public shape
{
	public:
		float length,breadth;
		float area;
		rectangle();
		rectangle(float,float);
		float Area();
		void display();
};

rectangle::rectangle()
{
	cout<<"in default of rectangle";
	length=0;
	breadth=0;
}

rectangle::rectangle(float l,float b)
{
	cout<<"in para of rectangle";
	length=l;
	breadth=b;
}
float rectangle::Area()
{
	area=length*breadth;
	return area;
}
void rectangle::display()
{
	cout<<"Area of rectangle: "<<area;
}

int main()
{
	shape *ptr=new square(12);
	cout<<"Area : "<<ptr->Area();
	
//	employee *ptr=new employee();
//	cout<<"Salary of employee : "<<ptr->findsalary();  
//	
//	ptr=new wageemployee(1,20,4000);
//	cout<<"Salary of wageemployee class: "<<ptr->findsalary(); //employee's salary
//	
//	ptr=new salesmanager(1,20,4000,20,3000);
//	cout<<"Salary of salesmanager class : "<<ptr->findsalary();

return 0;
}

