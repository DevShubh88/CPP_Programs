#include<iostream>
using namespace std;

class stu
{
	int rno;
	char name[10];
	double fee;
	public:
		stu()
		{
		
		}
		void display()
		{
			cout<<"enter roll no";
			cin>>rno;
			cout<<endl<<rno;
		}
};
int main(){
	stu s;
	s.display();
}
