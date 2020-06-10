#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	// your code goes here
   long long int t,x,y,l,r;
	cin>>t;
	while(t)
	{ cin>>x>>y>>l>>r;
	   vector <long long int> vec;long long int num,i;
	   for(i=l;i<=r;i++)
	     vec.push_back((x&i)*(y&i));
	    vector <long long int> vec2;
	      for(i=0;i<vec.size();i++)
	         vec2.push_back(vec[i]);
	        sort(vec2.begin(),vec2.end());
	          num=vec2[vec2.size()-1];
	         for(i=vec.size()-1;i>0;i--)
	            if(num==vec[i])
	                {
	                    cout<<l+i<<endl;
	                    break;
	                }
	   
	    t--;
	}
	return 0;
}

