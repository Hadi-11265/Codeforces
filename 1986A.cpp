#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,mx,mn,ans;
        cin>>a>>b>>c;
        mx = max(max(a,b),c);
        mn = min(min(a,b),c);
        ans = abs(mx-mn);
        cout<<ans<<endl;


    }
}