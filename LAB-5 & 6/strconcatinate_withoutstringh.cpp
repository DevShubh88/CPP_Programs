#include<iostream>
using namespace std;
#include<stdio.h>

int main()
{
  char str1[25],str2[25];
  int i=0,j=0;
  cout<<"Enter First String:"<<endl;
  cin>>str1;
  cout<<"Enter Second String:"<<endl;
  cin>>str2;
  while(str1[i]!='\0')
  i++;
  while(str2[j]!='\0')
  {
    str1[i]=str2[j];
    j++;
    i++;
  }
  str1[i]='\0';
  cout<<"Concatenated String is "<<str1;
  return 0;
}
