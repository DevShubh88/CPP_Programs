#include<iostream>
using namespace std;
#include<String.h>
class date
{
	int dd,mm,yy;
	public:
		void show();
		date(int,int,int);	
};

date::date(int d, int m, int y)
{
	dd=d;
	mm=m;
	yy=y;
	
}
void date::show()
{
	cout<<"Date : "<<dd<<" Month : "<<mm<<" Year : "<<yy<<endl;
}

int main()
{
	date d(3,6,1889);
	date d1(d);
	d.show();
	d1.show();
}
