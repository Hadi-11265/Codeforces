#include<bits/stdc++.h>
#define ll long long
#define be(x) x.begin() , x.end()
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int i,n,sum=0;
       cin>>n;
       vector<int>v(n);
       bool even=0,odd=0;
 
      for( i=0;i<n;i++)
      {
 
         cin>>v[i];
 
        sum+=v[i];
        if(v[i]%2==0)
        {
            even =1;
        }
        else
        {
            odd =1;
        }
    }
     if((sum % 2 !=0)||(even && odd))
     {
        cout<<"YES"<<endl;
     }
    else
     {
       cout<<"NO"<<endl;
     }
   }
 
}