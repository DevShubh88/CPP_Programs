#include<iostream>
using namespace std;

class Date1
{
	int date,month,year;
	public:
		void userDate()
		{
			cout<<"Enter the Date : ";
			cin>>date;			
		}
		void userMonth()
		{
			cout<<"Enter the Month : ";
			cin>>month;			
		}	
		void userYear()
		{
			cout<<"Enter the Year : ";
			cin>>year;		
		}
		
		int getDate()
		{
			return date;	
		}
		int getMonth()
		{
			return month;			
		}	
		int getYear()
		{
			return year;		
		}
		
		void setDate(int d)
		{
			date=d;	
		}
		void setMonth(int m)
		{
			month=m;			
		}	
		void setYear(int y)
		{
			year=y;		
		}
		
		void display()
		{
			cout<<"Congratulations!!!Your Birthday is : "<<date<<"/"<<month<<"/"<<year<<endl;
		}
		
		void acceptParam(int,int,int);
		
			
		
};

void Date1::acceptParam(int d,int m,int y)
{
	date=d;
	month=m;
	year=y;
}
int main()
{
	Date1 d1;
	Date1 d2;
	Date1 d3;
	Date1 d4;

	cout<<"size of object C1 : "<<sizeof(d1)<<endl;
	//cout<<"Your default Birthdate is :";
	d1.display();
	
	d2.userDate();
	cout<<"Your Birthdate is : "<<d2.getDate()<<endl;
	d2.userMonth();
	cout<<"Your BirthMonth is : "<<d2.getMonth()<<endl;
	d2.userYear();
	cout<<"Your BirthYear is : "<<d2.getYear()<<endl;
	d2.display();


	d3.display();
	d3.setDate(12);
	cout<<"Modified date is : "<<d3.getDate()<<endl;
	d3.display();
	d3.acceptParam(12,5,1669);
	d3.display();
	
	d4.display();
	d4.userDate();
	d4.userMonth();
	d4.userYear();
	cout<<"Modified date is : "<<d4.getDate()<<endl;
	d4.display();	
	
	
}

