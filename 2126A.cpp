#include <bits/stdc++.h>
#define ll long long
#define be(x) x.begin(), x.end()
#define rbe(x) x.rbegin(), x.rend()
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back
#define ft front
#define bk back
using namespace std;

void yes() 
{
    cout<<"YES"<<endl;
}

void no() 
{
    cout<<"NO"<<endl;
}

int main() 
{
    ll t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        vector<int>v;
        for(int x:str)
        {
            int a = x-'0';
            v.pb(a);
        }
        sort(be(v));
        cout<<v[0]<<endl;
    }
    
}