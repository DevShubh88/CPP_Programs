#include<iostream>
using namespace std;

typedef struct employee {
	int id;
	float salary;
}E;
int main()
{
	E e1;
	e1.id=1;
	e1.salary=10000;
	cout<<"employee id: "<< e1.id<<endl;
	cout<<"employee salary : "<<e1.salary;
}
