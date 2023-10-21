#include<iostream>
using namespace std;
class Student
{
	int m1,m2,m3,rollNo;
	public:
//		void setMarks(int r,int x,int y,int z)
//		{
//			rollNo=r;
//			m1=x;
//			m2=y;
//			m3=z;
//		}
		float getMarks()
		{		
			cout<<"Enter 3 subject's marks of a student : ";
			cin>>m1>>m2>>m3;
			return(m1+m2+m3);
		}
		int getRollNo()
		{
			cout<<"Enter the roll no : " ;
			cin>>rollNo;
			return rollNo;
		}
};

class Sports
{
	int ptMarks;
	public:
//		void setMarks(int p)
//		{
//			ptMarks=p;
//		}
		int getMarks()
		{
			cout<<"Enter students PT marks : " ;
			cin>>ptMarks;
			return ptMarks;		
		}
};

class Results:public Student,public Sports
{
	public:
		float avg,total,subjMarks=0,sportsMarks=0,rno;
		void getResults()
		{
			rno=getRollNo();
//			subjMarks=Student::getMarks();			
//			sportsMarks=Sports::getMarks();
	//	avg=(subjMarks+sportsMarks)/4;	
			total=Student::getMarks()+Sports::getMarks();	
			avg=total/4;
		}
		void displayResults()
		{
			cout<<"\nRoll no : "<<rno;
			cout<<"\nAverage results : "<<avg;			
		}
		void displayGrades()
		{
			if(avg>90)
			cout<<"\nA grade";
			if(avg>=70 && avg <90)
			cout<<"\nB grade";
			if(avg>=50 && avg <70)
			cout<<"\nC grade";
			if(avg>=35 && avg <50)
			cout<<"\nD grade";
		}
};

int main()
{
	Results r1;
	r1.getResults();
	r1.displayResults();
	r1.displayGrades();
	return 0;
}


