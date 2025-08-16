#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,ans;

    cin>>a>>b>>c;

    if(a>b && b>c)
    {
       ans = (a-b) + (b - c);
       cout<<ans<<endl;
    }
    if(a>b && b<c && a>c)
    {
       ans = (a-c) + (c - b);
       cout<<ans<<endl;
    }
    if(a>b && b<c && a<c)
    {
       ans = (a-b) + (c - a);
       cout<<ans<<endl;
    }
     if(a<b && b>c && a>c)
    {
       ans = (b-a) + (a-c);
       cout<<ans<<endl;
    }
    if( a<b && b> c && a<c)
    {
       ans = (b-c) + (c-a);
       cout<<ans<<endl;
    }
    if( a<b && a<c && b<c)
    {
       ans = (c-b) + (b - a);
       cout<<ans<<endl;
    }



}