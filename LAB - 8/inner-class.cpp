#include<iostream>
using namespace std;
class A
{ 
	public:	
	 class B
	 {
	 	int a;
	 	public :
	 		void getdata(int number)
	 		{
	 			a=number;
			 }
			void putdata()
	 		{	 		
	 			cout<<"Inner class value is : "<<a;
			 }
	 };
};
int main()
{
	A::B obj;
	obj.getdata(20);
	obj.putdata();
	return 0;
}
