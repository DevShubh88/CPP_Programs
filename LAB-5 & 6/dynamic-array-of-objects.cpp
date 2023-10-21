#include<iostream>
using namespace std;
class complex
{
	int real ,img;
	public:
		
		void get()
		{
			cout<<"Enter real and img values"<<endl;
			cin>>real>>img;
		}
		void put()
		{
			cout<<real<<"+"<<img<<"i"<<endl;

		}
};

int main()
{
	int n,i;
	cout<<"accept no of objects";
	cin>>n;
	complex* ptr = new complex[n];
	for(i=0;i<n;i++)
	{
		ptr[i].get();
	}
	for(i=0;i<n;i++)
	{
		ptr[i].put();
	}
	delete[]ptr;
}
