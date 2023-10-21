#include<iostream>
using namespace std;
float pi=3.142f
class Shape  //CLASS SHAPE
{
	public :
	
		float thickness=2.32f mm;
		void display{}

};

class Point:public Shape // CLASS POINT
{
	public:
		float x_co,y_co;
		
		void getdata()
		{
			cout<<"Enter x-coordinate";
			cin>>x_co;
			cout<<"Enter y-coordinate";
			cin>>y_co;
		}		
	//	Point(float,float);
		
		float getx_co()
		{
			return x_co;	
		}
		float gety_co()
		{
			return y_co;	
		}
		
};

//Point::Point(float x,float y)
//{
//		x_co=x;
//		y_co=y;
//}
class Line:public Point //CLASS LINE
{
	public:
		float start_pt,end_pt;
		void getdata()
		{
			cout<<"Enter start_pt";
			cin>>start_pt;
			cout<<"Enter end_pt";
			cin>>end_pt;
		}
		float getstart_pt()
		{
			return start_pt;	
		}
		float getend_pt()
		{
			return end_pt;	
		}
	//	Point(float,float);
}
//Line::Line(float s,float e):Point(float x,float y)
//{
//	start_pt=s;
//	end_pt=e;
//}

class Ellipse:public Shape,Point//CLASS ELLIPSE
{
	public:
		float centre,height,length;
		void getdata()
		{
			cout<<"Enter height";
			cin>>height;
			cout<<"Enter length";
			cin>>length;
		}
		
		float getheight()
		{
			return height;	
		}
		float getlength()
		{
			return length;	
		}	
			
	//	Ellipse(float,float);
		float Area()
		{
			return pi*length*height;
		}
};
//Ellipse::Ellipse(float l,float h):Point(float x,float y)
//{
//	length=l;
//	height=h;
//}
//float Ellipse::Area()
//{
//	return pi*length*height;
//}


class Circle:public Shape//CLASS CIRCLE
{
	public:	
		float centre,radius;
		
		void getdata()
		{
			cout<<"Enter radius";
			cin>>radius;
		//Circle(float);
		}
		float getradius()
		{
			return radius;	
		}
		
		float Area()
		{
			return pi*radius*radius;
		}
};
/*
Circle::Circle(float r):Point(float x,float y)
{
	radius=r;
}
float Circle::Area()
{
	return pi*radius*radius;
}*/
//void square::display()
//{
//	cout<<"Area of square: "<<area;
//}

class Square:public Shape //CLASS SQUARE
{
	public:
		
		float area,side;
	
		void getdata()
		{
			cout<<"Enter side";
			cin>>side;
		}
		float Area()
		{
			return side*side;
		}	
	//	void display();
};
/*
Square::Square()
{
	side=0;
}
Square::Square(int s)
{
	side=s;
}
float Square::Area()
{
	return side*side;
}*/
//void square::display()
//{
//	cout<<"Area of square: "<<area;
//}



class Rectangle:public Shape //CLASS RECTANGLE
{
	public:
		float length,breadth,area;
		
		void getdata()
		{
			cout<<"Enter the length";
			cin>>side;
		}
		float Area()
		{
			return length*breadth;
		}
	//	void display();
};


Rectangle::Rectangle(float l,float b)
{
	length=l;
	breadth=b;
}
float Rectangle::Area()
{
	area=length*breadth;
	return area;
}
//void rectangle::display()
//{
//	cout<<"Area of rectangle: "<<area;
//}

int main()
{
	int n=5,i;
	Shape* ptr = new Shape[n];
	

switch (n) 
{
	case 1:
		cout<<"Square\n";
		for(i=0;i<n;i++)
		{	
			ptr[i].getdata();
		}
		break;
	case 2:
		cout<<"Rectangle\n";
		break;
	case 3:
		cout<<"Ellipse\n";
		break;
	case 4:
		cout<<"Circle\n";
		break;
	case 5:
		cout<<"Line\n";
		break;
	default:
        cout << "Choices other than above";
        break;
}
	
	
	
	//cout<<"Area : "<<ptr->Area();
	
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

