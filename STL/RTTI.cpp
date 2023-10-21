#include <iostream>
using namespace std;

class B {
virtual void show()
 	{
 		cout<<"in show()";
	 }};
class D : public B
 {
 	public :
 		
  void show()
 	{
 		cout<<"in show()";
	 }
};
int main()
{
    B* b = new D;               // Base class pointer
    D* d = dynamic_cast<D*>(b); // Derived class pointer
    if (d != NULL)
       d->show();
    else
        cout << "cannot cast B* to D*";
}
