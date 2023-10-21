#include <iostream>  
using  namespace std;  
#include<string.h>   
class date
{
	int dd,mm,yy;
	public:
		void get()
		{
			cout<<"Enter date of birth : \n";
			cin>>dd>>mm>>yy;
		}
		void put()
		{
			cout<<"date of birth : "<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
};
class student
{
	int rollno;
	char name[10];
	int marks[5];
	int sum=0;
    float avg=0;
	date d;
	
	public:
		void get()
		{
			cout<<"Enter rollno";
			cin>>rollno;
			cout<<"Enter student's' name";
			cin>>name;
			
			cout<<"Enter subject marks : ";
            
			 for(int i=1;i<=5;i++)
			 {
			 	cin>>marks[i];
			 	sum+=marks[i];
			 } 
			 avg=(float)sum/5;		
			 d.get();
		}
		void put()
		{
			cout<<"\nRoll no. :"<<rollno<<"\nName : "<<name<<"\nAverage : "<<avg<<endl;
			d.put();
		}
		int getrollno()
		{
			return rollno;
		}
				
};
int main()
{
	student s[10],temp;
	int i,n,j;
	cout<<"Enter no. of students : "<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		s[i].get();
		
	}
	for(i=0;i<n;i++)
	{
		s[i].put();
		
	}
	cout<<" Sorted of students using roll no ";
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i].getrollno()>s[j].getrollno())
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
			
		}
	}
	for(i=0;i<n;i++)
	{
		s[i].put();
	}	
}
