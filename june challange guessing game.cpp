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

	ll n;
	cin>>n;

	 ll l=1; ll r=n;ll y; int flag=0; char ch;
	 char prev;
	 cout<<"0"<<endl;
	 cin>>ch;
	 prev=ch;
	 for(int i=1;i<=20;i++)
	  {
	  	cout<<i<<endl;
	  	cin>>ch;
	  	if(ch=='E')
	  	  return 0;
	  	else if(ch!=prev && i%2==0)
	  	{   flag=2;
	  		break;
		  }
	  	
	  }
	  if(flag==0)
	    flag==1;
	 
	 
	  
int ask=0;
char ch2,ck,ck2;
	while(true)
	{ 
	 if(ask==0)
	 { y=l+(r-l)/2;
	 	cout<<y<<endl;
		cin>>ch;
		cout<<y+2<<endl;
		cin>>ch2;
		cout<<y+1<<endl;
		cin>>ck;
		cout<<y+3<<endl;
		cin>>ck2;
	 
	  if(ch=='E'|| ch2=='E' || ck=='E' || ck2=='E')
	     return 0;
      else 
      {
      	if(ch!=ch2 && y%2==0)
      	 flag=2;
      	else if(ch!=ch2 && y%2!=0)
      	 flag=1;
        else if(ck!=ck2 && y%2!=0)
      	 flag=1;
      	 else if(ck!=ck2 && y%2==0)
      	 flag=2;
      	else
      	  ask==0;
	  }
	  
 }
  else if(ask==2)
    {
    	y=l+(r-l)/2;
    	cout<<y<<endl;
		cin>>ch;
	}
	 else
	  {
	  	cout<<y<<endl;
		cin>>ch;
	  }
		
      if(y%2==0 && flag==2)
		{
		 y=y+1;ask=1;
		}
      else if(y%2!=0 && flag==1)
        {
		 y=y+1;ask=1;
		 } 
      else if(ch=='G')     
        {
		l=y+1;
        if(flag==1 || flag==2)
           ask=2;
        else
          ask=0;
          
		 } 
      else if(ch=='L')
         {
       	r=y-1; 
		if(flag==1 || flag==2)
           ask=2;
        else
          ask=0;
          
		 }
      else
        return 0;
	 	
	      	
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

