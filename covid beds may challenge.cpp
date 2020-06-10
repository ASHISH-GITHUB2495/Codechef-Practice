#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {

	// your code goes here
	int t;
	cin>>t;
	while(t)
	{ 
	   int n,q;
	   string str;
	    cin>>n;
	    cin>>q;
	    cin>>str;
	    vector <int> vec;
	    int i,j;int count=0;
	    for( i=0;i<n;i++)
	       { count=0;
	           for(j=0;j<n;j++)
	              {
	                if(str[i]==str[j])
	                  count++;
	              }
	              vec.push_back(count);
	              
	       }
	    
	    sort(vec.begin(),vec.end());
	     vector <int> vec2;
	      for(i=0;i<vec.size()-1;i++)
	        if(vec[i]!=vec[i+1])
	           vec2.push_back(vec[i]);
	    
	    
	    
	    
	    while(q)
	      { long long int c;
	        cin>>c;
	        int sum=0;
	          for(i=0;i<vec2.size();i++)
	            { 
	               if(vec2[i]-c>0)
	                sum=sum+(vec2[i]-c);
	                
	            }
	            cout<<sum<<endl;
	          
	          
	          
	       q--;   
	      }
	    
	    
	    
	    
	    t--;
	}
	return 0;
}

