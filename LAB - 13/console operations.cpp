//#include <iostream>     // std::cout, std::endl  
//#include <iomanip>      // std::setfill, std::setw  
//using namespace std;  
//  
//int main () {  
//  cout << setfill ('#') << setw (16);  
//  cout << 17 << endl;  
//  return 0;  
//}  

#include <iostream>
#include <istream>
#include <sstream>
#include <string>
 
using namespace std;
 
int main()
{
    istringstream str("           Programmer");
    string line;

    getline(str >>ws, line);
    cout << line << endl;
    cout << "b" << ends;
    cout << "c" << endl;
 
    return 0;
}
