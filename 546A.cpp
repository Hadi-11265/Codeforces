#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,k,n,w,sum=0,ans;
    cin>>k>>n>>w;

    for(i=0;i<=w;i++)
    {
       sum+=i*k;
       ans = sum - n;

    }
    if(ans>0)
        {
            cout<<ans<<endl;
        }
   else
        {
            cout<<"0"<<endl;
        }
    
}