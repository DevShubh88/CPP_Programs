#include<iostream>
using namespace std;
//void display(char='*',int=5);

class Demo
{
	public:
	Demo(char='*',int=5);
	
};

Demo::Demo(char c,int count)
{
	for (int i=1;i<=count;++i)
	{
		cout<<c<<" ";
	}
}
/*void display(char c,int count)
{
	for (int i=1;i<=count;++i)
	{
		cout<<c;
	}
}*/
int main()
{
	Demo d;
//	cout<<"No Arguments passed:";
	//display();
	//cout<<"first argument passed";
//	display('#');
//	cout<<"Both argument passed";
//	display('$',10);
}


