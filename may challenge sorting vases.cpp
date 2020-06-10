#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector <int> vec;
vector <int> vec2;
vector <int> xi;
vector <int> yi;


void swap(int i,int j)
{
    int temp=vec[i];
    vec[i]=vec[j];
    vec[j]=temp;
}

int main()
{  int count=0;
    int t;
    cin>>t;
    while (t)
    {
        int n,m,i,j,x,y,data;
        cin>>n>>m;
        for(i=0;i<n;i++)
         {
             cin>>data;
             vec.push_back(data);
         }
         vec2=vec;
         sort(vec2.begin(),vec2.end());
        for(i=0;i<m;i++)
        { cin>>x>>y;
          xi.push_back(x);
          yi.push_back(y);
        }
        for(i=0;i<m;i++)
        {
            if(vec[xi[i]-1]>vec[yi[i]-1])
            swap(xi[i]-1,yi[i]-1);
        }
        
          int k;
        for(i=0;i<vec.size();i++)
        {
             j=i+1;
            if(vec[i]!=j)
             {
                 for(k=0;k<vec.size();k++)
                   if(vec[k]==j)
                    {
                       count++;
                       swap(i,k);
                       break;
                    }
             }
             
        }
        
        cout<<count<<endl;
      
        
        
        xi.clear();yi.clear();vec2.clear();
        vec.clear();count=0;
        t--;
    }
return 0;
}
