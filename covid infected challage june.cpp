#include<bits/stdc++.h>
using namespace std;


#define pb push_back
#define ll long long int
#define mp make_pair
#define mt make_tuple
#define mod 100000
#define for1(k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define max 50000
#define IOS ios_base:: sync_with_stdio(false);cin.tie(0);







int main()
{

//////////////////////////////////////start...............

	int t;
	cin >> t;
	while (t--)
	{
		int n, p;
		cin >> n >> p;

		int arr[n][n];
		fill(arr[0], arr[0] + n * n, -1);
	    int flag=0;
        int infected;
        cout<<"1 1 1"<<" "<<n<<" "<<n<<endl;
        cin>>infected;
        if(infected==0)
           {
           	  for1(0,n)
           	    {for2(0,n)
           	      cout<<"0"<<" ";
           	    	   cout<<endl;
				   }
				   continue;
		   }



   
        int value;
        for(int i=0;i<n ;i++)                         // for row wise query
         {  
         	if(infected>0)
         	{
               cout<<"1"<<" ";
               cout<<i+1<<" "<<"1"<<" "<<i+1<<" "<<n<<endl;
               cin>>value;

               if(value==0)
               	 {for(int j=0;j<n;j++)
               	       arr[i][j]=0;
               	   }
               else if(value==n)
               {
               	 for(int j=0;j<n;j++)
               	 	arr[i][j]=1;
               	  infected=infected-n;
               }


         	}
         	else
         	{
         		flag=1;
         		break;
         	}

         }
  
     if(flag==1)
     {

     	cout<<"2"<<endl;
     	for1(0,n)
     	{
     		for2(0,n)
     		{ if(arr[i][j]==-1) 
     		   arr[i][j]=0;
			 cout<<arr[i][j]<<" ";
			 }
     		
     		 cout<<endl;
     	}
     	continue;
     }

         for(int i=0;i<n;i++)                         // for column wise query
         {  
         	if(infected>0)
         	{
               cout<<"1"<<" ";
               cout<<1<<" "<<i+1<<" "<<n<<" "<<i+1<<endl;
               cin>>value;

               if(value==0)
               	 {for(int j=0;j<n;j++)
               	       arr[j][i]=0;
               	   }
               else if(value==n)
               {
               	 for(int j=0;j<n;j++)
               	  { if(arr[j][i]!=1)
						 {  arr[j][i]=1;
						 infected=infected-1;	
						 }
                    }
               }


         	}
         	else
         	{
         		flag=1;
         		break;
         	}

         }



     if(flag==1)
     {


     	cout<<"2"<<endl;
     	for1(0,n)
     	{   for2(0,n)
     		{ 
			 if(arr[i][j]==-1) 
     		   arr[i][j]=0;
			 cout<<arr[i][j]<<" ";
			 }
     		cout<<endl;
     	}
     	continue;
     }
      
      for1(0,n)
      { for2(0,n)
          {
          	if(arr[i][j]==-1 && infected>0)
          	{
                
              cout<<"1"<<" "<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j+1<<endl;
              cin>>value;
              if(value==1)
              {
              	arr[i][j]=1;
              	infected=infected-1;
              }
              else
              	arr[i][j]=0;



          	}
          	else if(infected==0)
          	{
              flag=1;
              break;
          	}
          
          }
          if(flag==1)
          	 break;

       }


 if(flag==1)
 {
   
     	cout<<"2"<<endl;
     	for1(0,n)
     	{
     	 for2(0,n)
     		{ 
			 if(arr[i][j]==-1) 
     		   arr[i][j]=0;
			 cout<<arr[i][j]<<" ";
			 }
			 cout<<endl;
     	}
     	continue;	
 }




















	}



/////////////////////////////end................................... ....

	return 0;

}

//c v a s selecting text or x for selecting cut
//ctrl+d after selecting text to select same type
//ctrl+shift+d for copy and paste the line below it
//ctrl+del to delete a text
//ctrl+left to jump left of line or vice versa
//ctrl+shift+"/"  to comment whole block and vice versa for undo
//ctrl+"/" for commenting a line

