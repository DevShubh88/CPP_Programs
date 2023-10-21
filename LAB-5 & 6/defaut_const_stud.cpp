#include<iostream>
using namespace std;

class Student
{
	int id;
	char name[10];
	char gender[10];
	
	public:
		
		Student()
		{
			cout<<"Enter the id : ";
			cin>>id;	
			
			cout<<"Enter the name : ";
			cin>>name;	
			
			cout<<"Enter the gender : ";
			cin>>gender;
		}
		void display()
		{
			cout<<"you are : "<<id<<"/n"<<name<<"/n"<<gender<<endl;
		}
		
};

int main()
{
	Student S1;

	S1.display();
	return 0;
	
}

