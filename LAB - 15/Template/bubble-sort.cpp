#include<iostream>
using namespace std;

int main()
{
	int arr[7] = {4,45,67,345,3,8,9};
	for(int i=0; i<7; i++)
	{
		for(int j=0; j<7-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
	for(int i=0; i<7; i++)
	{
		cout<<arr[i]<<" ";
	}
}
