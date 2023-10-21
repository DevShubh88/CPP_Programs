#include<iostream>
using namespace std;
int length_of_string(char* p) {
    int count = 0;

    while (*p != '\0') {
        count++;
        p++;
    }

    return count;
}
int main() {
    char str[100];
    int length;

    cout<<"Enter any string : "<<endl;
    cin>>str;
    length = length_of_string(str);

    cout<<"The length of the given string : "<<length<<endl;;

    return 0;
}
