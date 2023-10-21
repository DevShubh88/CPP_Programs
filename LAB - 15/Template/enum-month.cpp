#include<iostream>
using namespace std;

int main()
{
	enum month {jan,feb,march,april,may,june,july,aug,sept,oct,nov,dec};
	enum month m;
	for(int i=jan; i<=dec; i++)
	{
		cout<<i<<endl;
	}
	m=april;
	cout<<m;
}
