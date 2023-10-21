#include<iostream>
using namespace std;
class Student
{
	int rno,dd,mm,yy,marks;
	

	public:
		void getdata()
		{
			cout<<" Roll number : ";
			cin>>rno;
	
			cout<<"Enter date : ";
			cin>>dd>>mm>>yy;
	
			cout<<"Enter the marks : ";
			cin>>marks;
		}
		void disp(){
			cout<<"Roll number : "<<rno<<endl;
			cout<<"Date : "<<dd<<"/"<<mm<<"/"<<yy<<endl;
			cout<<"Marks : "<<marks<<endl;
		}
};

int main()
{
	int n;	
	Student s[3];
	
	for(int i =0;i<3;i++)
	{
		s[i].getdata();
	}
	for(int i =0;i<3;i++){
		s[i].disp();
	}
	return 0;
}
