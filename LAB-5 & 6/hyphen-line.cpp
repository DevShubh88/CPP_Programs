#include<iostream>
using namespace std;
void line()
{
	int i=0;
	while(i<=20)
	{
		cout<<"-";
		i++;
	}
}
int main()
{
	line();cout<<endl;
	cout<<"Datatype"<<"      "<<"size"<<endl;
	line();cout<<endl;
	cout<<"int"<<"      "<<"       4"<<endl;
	line();cout<<endl;
	cout<<"char"<<"      "<<"      1"<<endl;
	line();cout<<endl;
	cout<<"float"<<"      "<<"     4"<<endl;
	line();cout<<endl;
	cout<<"double"<<"      "<<"    8"<<endl;
	line();cout<<endl;
}
