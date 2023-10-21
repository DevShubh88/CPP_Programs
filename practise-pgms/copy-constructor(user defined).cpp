#include<iostream>
using namespace std;
#include<String.h>
class date
{
	int dd,mm,yy;
	public:
		void show();
		date(int,int,int);
		date(date&);	
};

date::date(int dd, int mm, int yy)
{
	this->dd=dd;
	this->mm=mm;
	this->yy=yy;
	
}
date::date(date &d_new)
{
	dd=d_new.dd;
	mm=7;
	yy=1889;
}
void date::show()
{
	cout<<"Date : "<<dd<<" Month : "<<mm<<" Year : "<<yy<<endl;
}

int main()
{
	date d(3,6,2001);//
	date d1(d);
	d.show();
	d1.show();
}
