#include<iostream>
using namespace std;
void CopyString(char* st1, char* st2)
{
    int i = 0;
      for (i = 0; st1[i]!='\0'; i++)
      {
        st2[i] = st1[i];
      }
    st2[i] = '\0';
}

int main()
{
    char str1[20] = "str1", str2[20];  
    CopyString(str1, str2); 
    cout<<"First String s1 : "<< str1<<endl;
     cout<<"Second String s2 : "<< str2<<endl;
       
    return 0;
}
