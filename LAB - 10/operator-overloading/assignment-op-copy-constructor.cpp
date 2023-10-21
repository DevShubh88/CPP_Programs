#include<iostream>
using namespace std;
#include<string.h>
class String1
{
	int len;
	char* ptr;
	public:
		void display();
		String1(char*);
		String1& operator = (String1&);
		String1(String1&)
		{
			cout<<"copy constructor is called";
		}
};
String1& String1::operator=(String1& s)
{
	cout<<"assignment is called\n";
	this->len=s.len;
	delete[] ptr;
	ptr=new char[this->len+1];
	strcpy(ptr,s.ptr);
	return(*this);
}
void String1::display()
{
	cout<<"length is "<<len<<endl;
	cout<<"string is "<<ptr<<endl;
}
String1::String1(char* sptr)
{
	len = strlen(sptr);
	ptr = new char[len+1];
	strcpy(ptr,sptr);
}
	
int main()
{
	String1 s1("abc");
	String1 s2("xyz");
	s2 = s1; //s2.operator=(s1)
	cout<<"\nAssignment opertor overloading\n";
	s2.display();
	
//	String1 s5=s2;	
//	cout<<"copy constructor overloading";
//	s5.display();
	
	return 0;
}
