#include<iostream>
using namespace std;
class Student
{
	int rno,dd,mm,yy,marks[10];
	int sum[10];int avg[10];
	public:
		void getdata()
		{
			cout<<" Roll number : ";
			cin>>rno;
	
			cout<<"Enter date : ";
			cin>>dd>>mm>>yy;
			
			for(int i=0;i<2;i++)
			{
				cout<<"Enter the marks : ";
				cin>>marks[i];
				
			}
		}
		void disp()
		{
			cout<<"Roll number : "<<rno<<endl;			
			cout<<"Date : "<<dd<<"/"<<mm<<"/"<<yy<<endl;
//			for(int i=0;i<2;i++)
//			{
//				//cout<<"Marks : "<<marks[i]<<endl;
//				avg[i]=avg[i]+marks[i];
//				
//			}
			
			for(int i=0;i<2;i++)
			{	
				sum[i]=0;			
				sum[i]=sum[i]+marks[i];	//for sum		
			}
			
			for(int i=0;i<2;i++)
			{				
				avg[i]=sum[i]/3;	//for avg
			}
			
		
				//cout<<"AVERAGE MARKS "<<avg[i]<<endl;
				for(int i=0; i<2; i++)
 			   {
        			for(int j=i+1; j<2; j++) 
					{ 
					if(avg[i]>avg[j])
          			  {
            		    int temp = avg[i];
             		    avg[i] = avg[j];
              		   avg[j] = temp;
         			   }
       				 }
   				 }
   				 
   			for(int i=0;i<2;i++)
			{				
				cout<<"AVERAGE MARKS "<<avg[i]<<endl;
			}
			

		}
//		void calc()
//		{
//			for(int i=0;i<2;i++)
//			{				
//				sum[i]+=marks[i];			
//			}
//			for(int i=0;i<2;i++)
//			{
//				avg[i]=sum[i]/3;
//			}
//		}
};

int main()
{
	int n;	
	Student s[3];
	
	for(int i =0;i<2;i++)
	{
		s[i].getdata();
	}
	
	for(int i =0;i<2;i++){
		
		s[i].disp();
	}
	return 0;
}
