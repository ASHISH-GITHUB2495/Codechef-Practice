#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	// your code goes here
	int t;
	cin>>t;
	while(t)
	{ 
	   int h,w,n; int i,j,data;
	   cin>>h>>w>>n;
	   
	   int grid[h][w]={0};
	   
	   for(i=0;i<h;i++)
	   { for(j=0;j<w;j++)
	       {
	          cin>>grid[i][j];
	       }
	   }
	   
	   vector <int> y;  // the rows
	   vector <int> x;   //the colums
	   vector <int> p;   //the particle value upto n
	   
	   for(i=1;i<=n;i++)
	    { cin>>data;
	      y.push_back(data);
	      cin>>data;
	     x.push_back(data);
	      cin>>data;
	      p.push_back(data);
	        
	    }
	       int highest;
	       
	  
	    
	    
	   int sum1=0; int sum2=0 ,sum31=0,sum32=0;
	   vector <int> sign;
	   
	  
	                   //
	    
	 int k;    
	     vector <int> pp; int flag=1;int key,key2;vector <int> ppp;ppp=p;
	     pp=p;
for(k=0;k<p.size();k++)
{  sum1=0;sum2=0;
	     sum1=sum1+(grid[y[k]-1][x[k]-1] *p[k]);
	     
	     key=y[k];
	     flag=1;
	      for(i=0;i<y.size();i++)
	       { 
	           if(key==y[i] && flag==1 && p[i]==p[k])
	            flag=2;
	           else if(key==y[i] )
	             {
	                 sum2=sum2+p[k]*p[i];
	             }
	       }
	       key=x[k];
	     flag=1;
	      for(i=0;i<x.size();i++)
	       { 
	           if(key==x[i] && flag==1 && p[i]==p[k])
	            flag=2;
	           else if(key==x[i] )
	             {
	                 sum2=sum2+p[k]*p[i];
	             }
	       }
	     
	     
	      
    sum31=+sum1+sum2; 
         p[k]=p[k];
         
         sum1=0;sum2=0;
	     sum1=sum1+(grid[y[k]-1][x[k]-1] *p[k]*-1);
	     
	     key=y[k];
	     flag=1;
	      for(i=0;i<y.size();i++)
	       { 
	           if(key==y[i] && flag==1 && p[i]*-1==p[k]*-1)
	            flag=2;
	           else if(key==y[i] )
	             {
	                 sum2=sum2+p[k]*-1*p[i];
	             }
	       }
	       key=x[k];
	     flag=1;
	      for(i=0;i<x.size();i++)
	       { 
	           if(key==x[i] && flag==1 && p[i]*-1==p[k]*-1)
	            flag=2;
	           else if(key==x[i] )
	             {
	                 sum2=sum2+p[k]*-1*p[i];
	             }
	       }
	     
	  
	     sum32=sum1+sum2;
	    
	     if(sum31<sum32)
	      pp[k]=pp[k]*-1;
	  
    
}       p=ppp;
	     for(i=0;i<pp.size();i++)
	        if(p[i]!=pp[i])
	          sign.push_back(-1);
	          else
	           sign.push_back(1);
	     for(i=0;i<sign.size();i++)
	     {
	         if(sign[i]==-1)
	          p[i]=p[i]*-1;
	     }
///////////////////////////////////////////////////////////////////////////////////////////////////
sum1=0;sum2=0;
 for(i=0;i<n;i++)
 sum1=sum1+(p[i]*1)*grid[y[i]-1][x[i]-1];



    /*  cout<<" value of h,w,n"<<h<<" "<<w<<" "<<n<<endl;
      cout<<"value of y,x,p as follows"<<endl;
      for(i=0;i<x.size();i++)
        cout<<x[i]<<" ";
        cout<<endl;
      for(i=0;i<y.size();i++)
        cout<<y[i]<<" ";
        cout<<endl;
      for(i=0;i<p.size();i++)
        cout<<p[i]<<" ";
        cout<<endl;
        cout<<"values of grid"<<endl;
        for(i=0;i<h;i++)
         { for(j=0;j<w;j++)
             cout<<grid[i][j]<<" ";
             cout<<endl;
         }
            */
	  flag=1;
	                   //
	    vector <int> yy;
	    vector <int> xx;
	    yy=y;
	    xx=x;
	    sort(yy.begin(),yy.end());
	    sort(xx.begin(),xx.end());
	    vector <int> y1;
	    vector <int> x1;
	    for(i=0;i<yy.size();i++)
	      if(yy[i]!=yy[i+1])
	        y1.push_back(y[i]);
	    for(i=0;i<xx.size();i++)
	      if(xx[i]!=xx[i+1])
	        x1.push_back(x[i]);
	                   
	     for(i=0;i<y1.size();i++)
	     {  key=i;flag=1;
	         for(j=0;j<=y.size();j++)
	           {   if(y1[i]==y[j] && flag==1)
	                   flag=2;
	               else if(y1[i]==y[j] && flag==2)
	              {
	                  sum2=sum2+p[key]*p[j];
	                   key=j;
	                  
	              }
	               
	           }
	     } 
	       
	       
	         flag=1;
       for(i=0;i<x1.size();i++)
	     {  key=i;flag=1;
	         for(j=0;j<=x.size();j++)
	           {   if(x1[i]==x[j] && flag==1)
	                   flag=2;
	               else if(x1[i]==x[j] && flag==2)
	              {
	                  sum2=sum2+p[key]*p[j];
	                   key=j;
	                  
	              }
	               
	           }
	     } 
	  
	     
	     
	   
	   cout<<sum1+sum2<<endl;
	  
	   for(i=0;i<sign.size();i++)
	     cout<<sign[i]<<" ";
	     cout<<endl;
	   
	   
	   
	   
	   
	   
	    t--;
	}
	return 0;
}

