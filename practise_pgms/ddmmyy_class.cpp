#include<iostream>
using namespace std;
class U_Date
{
	int dd,mm,yy;
	public :
		void getData()
		{
			cout<<"Enter Date : "<<endl;
			cin>>dd>>mm>>yy;
		}
		void Display()
		{	
			cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
		void setDD(int);
		int getDD();
		void setMM(int);
		int getMM();
		void setYY(int);
		int getYY();
};
void U_Date :: setDD(int d)
{
	dd = d;
}
int U_Date :: getDD()
{
	return dd;
}
void U_Date :: setMM(int m)
{
	mm = m;
}
int U_Date :: getMM()
{
	return mm;
}
void U_Date :: setYY(int y)
{
	yy = y;
}
int U_Date :: getYY()
{
	return yy;
}
int main()
{
	U_Date d1;
	d1.getData();
	d1.Display();
	d1.setDD(12);
	d1.Display();
	d1.setMM(9);
	d1.Display();
	d1.setYY(2023);
	d1.Display();
}

