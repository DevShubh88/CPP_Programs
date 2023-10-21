#include<iostream>
using namespace std;

int main()
{
	
	int a,num,ans=1;
	cout<<"Enter the number";
	cin>>num;
	int i=2;
	while(i<num)
	{
		if(num%2==0)
		{
			break;
		}
		i++;
	}
	if(i==num)
	{
		cout<<"prime";
	}
	else{
		cout<<"not prime";
	}

	
	return 0;
}
