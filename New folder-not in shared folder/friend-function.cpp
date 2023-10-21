#include<iostream>
using namespace std;
class temp
{
	int x;
	public:
		void get();
		void show();
		friend void manipulate(temp&);
};
void temp ::show()
{
	cout<<"value of x is "<<x;
}
void manipulate(temp &t21)
{
	cout<<"in friend function\n";
	t21.x = t21.x + 5;
}
void temp :: get()
{
	cout<<"accept x\n";
	cin>>x;
	
}
int main()
{
	temp t;
	t.get();
	manipulate(t);
	t.show();
}
