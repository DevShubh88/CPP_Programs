#include<iostream>
#include<Math.h>

using namespace std;

int main()
{
	int p=30000;
	float r=5.6f;
	int t =3;
	int n=2;
	double comp;
	comp=p*pow(1+(r/100*n),n*t);
	cout<<" CI = " << comp;
}

