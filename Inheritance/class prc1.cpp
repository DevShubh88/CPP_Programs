#include<iostream>
using namespace std;
class student
{
	int rollno;
	char name[10];
	double fee;
	public:
		
	student()
	{
	cout<<"Enter the roll no";
	cin>>rollno;
	cout<<"Enter name";
	cin>>name;
	cout<<"Enter fee";
	cin>>fee;
}
void display()
{
	cout<<rollno<<"\t"<<name<<"\t"<<fee<<endl;
}
};
int main(){

student S;
S.display();
return 0;
}

