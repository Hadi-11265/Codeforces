#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,mx,mn;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0;i<n;i++)
    {
          mx=max(a[i],b[i]);
          mn=min(a[i],b[i]);
            cout<<mn<<" "<<mx<<endl;

    }

}