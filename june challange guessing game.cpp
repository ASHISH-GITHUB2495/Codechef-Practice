#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define for1(k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define max 100000




int main()
{


//////////////////////////////////////start...............

int y;
int n;
int l;
int r;
int flag;
char ch,ch2,ch3,ch4;
	
	cin >> n;

	 l=1;  r=n;
      flag=-1;


	 while(true)
	 {
	  y=l+(r-l)/2;
	 	cout<<y<<endl;
	 	fflush(stdout);
        cin>>ch;

        if(ch=='E')
       { flag=0;
         break;
       }

        cout<<y+1<<endl;
        fflush(stdout);
        cin>>ch2;

        if(ch2=='E')
         { flag=0;
           break;
          }
       
      else if(ch==ch2)
        {
        	if(ch=='G')
        		l=y+1+1;
        	else
        	   r=y-1;

        
        }
        else
        { 
		flag=1;
        	break;
        }




	 }
	 
	 if(flag==0)
	   return 0;


     if(flag==1)
	{
      cout<<y-1<<endl;
      fflush(stdout);
	  cin>>ch3;
	   if(ch3=='E')
	    return 0;
	  
	  if(ch3==ch)
	   {
	   	if(y%2==0)
	   	 flag=1;
	   	else
	   	 flag=2;
	   }
	   else
	    { if(y%2==0)
	       flag=2;
	      else
	       flag=1;
	    	
		}
	  	
     }
     
    if(flag==0)
     return 0;
     
     if(flag!=0)
     {                                                                           
     	if(ch3=='G' )
     	  l=y+1+1;
     	else 
     	  r=y-1-1;
     
	 
	 
	while(true)
  	{ int bad=1;
		 y=l+(r-l)/2;
     	   cout<<y<<endl;
     	   fflush(stdout);
     	    cin>>ch;
     	 
     	 if(ch=='E')
     	   { flag=0;
            break;
           }
     	  
     	  if(y%2==0 && flag==2)
     	   {
     	    cout<<y+1<<endl;
     	    fflush(stdout);
     	    cin>>ch2;
     	    bad=2;
			  }
		else if(y%2!=0 && flag==1)
		{
			cout<<y+1<<endl;
			fflush(stdout);
     	      cin>>ch2;
     	      bad=2;
  		}
     	 if(ch2=='E')
     	    { flag=0;
              break;
             }
     	    
     	if(bad==2)
     	{ if(ch2=='G')
     	     l=y+1+1;
     	 else
     	    r=y-1;
     	    
     	    
		 }
		else
		  {
		  	if(ch=='G')
		  	  l=y+1;
		  	else
		  	  r=y-1;
		  }
     	
    
     		
     		
		 }
     		
     	
     	
	 }
     
if(flag==0)
 return 0;
    

   




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

