#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,sum,ans,mx=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }

    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            sum=a[0]+b[0];
            ans = max(ans,sum);
        }
        else
        {
          sum = sum - a[i] + b[i];
          if(sum < mx)
            sum = mx;
            ans = max(ans,sum);
        }

    }
    cout<<ans;


}