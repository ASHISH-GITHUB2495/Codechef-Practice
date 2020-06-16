#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int l=1,r=n;
	char ch;int y;
	while(true)
	{ y=l+(r-l)/2;
	  
	  cout<<y<<endl<<flush;
	  cin>>ch;
	  
	  if(ch=='E')
	  {
	  	cout<<"true"<<endl;
	  	break;
	  }
	  else if(ch=='G')
	    l=y+1;
	  else
	    r=y-1;
	  
	  
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
