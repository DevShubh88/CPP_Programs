#include<iostream>  
#include<vector>  
using namespace std;  
int main()  
{  
    vector<char> v;  
    v.push_back('r');  
    v.push_back('a');  
    v.push_back('m');  
   
    for(int i=0;i<v.size();i++)  
    {
	cout<<v[i];
    }
	cout<<endl;
	v.pop_back();  
	
     for(int i=0;i<v.size();i++)  
     {
	 cout<<v[i];
	 }
    
}  
