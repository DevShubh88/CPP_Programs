#include<iostream>
using namespace std;
class employee
{
	int id;
	public:
		employee();
		employee(int);
		void display();
		int findsalary()
		{
			return 0;
		}
};
employee :: employee()
{
	cout<<"in default of emp\n";
	id = 0;
}
employee :: employee(int i)
{
	cout<<"in para of emp\n";
	id = i;
}
void employee::display()
{
	cout<<"id of emp : "<<id;
}

class wageemployee:public employee
{
	int hrs,rate;
	public:
		wageemployee();
		wageemployee(int,int,int);
		void display();
		int findsalary();		
};

wageemployee::wageemployee()
{
	cout<<"in default of wage\n";
	 hrs=0;rate=0;
}
wageemployee::wageemployee(int i,int h,int r):employee(i)
{
		cout<<"in para of wage\n";
	 hrs=h;rate=r;
}
int wageemployee::findsalary()
{
	return hrs*rate;
}

void wageemployee::display()
{
	employee::display();
	cout<<"hrs : "<<hrs<<endl;
	cout<<"rate : "<<rate<<endl;
}

class salesmanager:public wageemployee
{
	int sales,comm;
	public:
		salesmanager();
		salesmanager(int,int,int,int,int);
		void display();
		int findsalary();		
};

salesmanager::salesmanager()
{
	cout<<"in default of sales\n";
	 sales=0;comm=0;
}

salesmanager::salesmanager(int i,int h,int r,int s,int c):wageemployee(i,h,r)
{
	cout<<"in para of sales\n";
	 sales=s;comm=c;
}
void salesmanager::display()
{
	employee::display();
	cout<<"sales of emp : "<<sales<<endl;
	cout<<"comm of emp  : "<<comm<<endl;
}
int salesmanager::findsalary()
{
	return (wageemployee::findsalary())+sales*comm;
}

int main()
{
	salesmanager *sm=new salesmanager(10,10,500,2000,100);
	sm->display();	
	cout<<"Salary is : "<<sm->findsalary();
	if(sm)
	delete sm;
	return 0;
}



