#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter array size\n";	
	cin>>n;
	int* p = new int[n];
	cout<<"Enter array elements\n";
	for(int i = 0; i<n; i++)
	{
		cin>>p[i];
	}
	cout<<"array elements : \n";
	for(int i = 0; i<n; i++)
	{
		cout<< p[i]<<endl;
	}
	delete[] p;
	cout<<"Dynamic memory disallocated in after delete\n";
}
