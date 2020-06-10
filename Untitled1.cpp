#include<iostream>
#include<vector>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t)
   {
      int n;
      cin>>n;
       vector <int> vec;int data;
       for(int i=0;i<n*n;i++)
           {
           	cin>>data;
           	vec.push_back(data);
		   }
		int flag=1;
	    int count=0;
       for(int i=0;i<n*n;i++)
         { count++;
		   if(count==n)
		     count=0;
		   if(vec[i]==vec[i+1] && vec[i]==1 && count!=0)
             { count++;
             	flag=0;
             	 break;
			 }
			
         	
		 }
 
      
   if(flag==0)
    cout<<"UNSAFE\n";
   else
     cout<<"SAFE\n";
   
   
   
   t--;
   }

}

