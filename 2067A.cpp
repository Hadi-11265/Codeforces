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
        int x,y;
        cin>>x>>y;
        if(x==y)
        {
            cout<<"NO"<<endl;
        }
        else if(++x == y)
        {
            cout<<"YES"<<endl;
        }
        else if((x-y)%9==0 && x-y>0)
            {
                cout<<"YES"<<endl;
            }
        else
            cout<<"NO"<<endl;

    }
}