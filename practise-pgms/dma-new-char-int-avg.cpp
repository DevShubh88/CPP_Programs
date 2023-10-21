#include<iostream>
using namespace std;
int main()
{
	int m,n,sum=0;
	cout<<"Enter no of subjects \n";	
	cin>>m;
	cout<<"Enter no of characters \n";	
	cin>>n;
	int* marks_m = new int[m];
	char* name_n = new char[n+1];
	cout<<"Enter marks\n";
	for(int i=0;i<m;i++)
	{
		cin>>marks_m[i];
		sum=sum+marks_m[i];
	}
	float avg=(float)sum/m;
	cout<<"Enter name of the student\n";
	cin>>name_n;
	cout<<" name of the student : \n";
	cin>>name_n;
	cout<<" avg marks of the student : \n";
	cin>>avg;
	
	delete[] marks_m;
	delete[] name_n;
	
	
	return 0;
}
	
	
	
