#include<iostream>
using namespace std;

class cDate
{
	
	public :
		int mMonth,mDay,mYear;
		cDate()
		{
			mDay=10;
			mMonth=11;
			mYear=1099;	
		}	
		cDate(int d,int m,int y)
		{
			cout<<"In date constructor"<<endl;
			mDay=d;
			mMonth=m;
			mYear=y;			
		}
		void display()
		{
			cout<<"Day : "<<mDay<<endl;
			cout<<"Month : "<<mMonth<<endl;
			cout<<"Year : "<<mYear<<endl;
		}
};

class cEmployee
{
	int mId,mBasicSal;
	cDate mBdate;
	public:
		cEmployee()
		{
			mId=1;
			mBasicSal=100;
			mBdate=cDate();
		}
	
		cEmployee(int,int,int,int,int);
		void display();
				
};

cEmployee::cEmployee(int i,int sal,int d,int m,int y):mBdate(d,m,y)
{
	cout<<"emp constructor"<<endl;
	mId=i;
	mBasicSal=sal;
}

void cEmployee::display()
{
	cout<<"Id : "<<mId<<endl;
	cout<<"sal : "<<mBasicSal<<endl;
	mBdate.display();
}

int main()
{
	cEmployee e2(2,2000,11,12,1789);
	e2.display();
}



