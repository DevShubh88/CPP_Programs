#include<iostream>
using namespace std;
namespace first
{
	int i=10;
	void display()
	{
		cout<<"hello"<<endl;
	}
	
};
namespace second
{
	int j=20;
	void display()
	{
		cout<<"bye"<<endl;
	}
	
};
int main()
{
	first :: display();
	cout<<first::i<<endl;
	
	second :: display();
	cout<<second::j;
}
