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
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(rbe(v));
        int count=0;
        int res = 0;
        
        for(ll i=0;i<n;i++) 
        {
            count++;
            if(v[i] * count >= x)
             {
                res++;
                count = 0;
            }
        }

        cout<<res<<endl;

    }
}