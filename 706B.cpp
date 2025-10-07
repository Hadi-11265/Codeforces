#include <bits/stdc++.h>
#define ll long long
#define be(x) x.begin(), x.end()
#define rbe(x) x.rbegin(), x.rend()
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back
#define f front
#define b back
using namespace std;

int main()
 {
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll i,j;
    for(i=0;i<n;i++)
   {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    ll q;
    cin>>q;
    vector<ll>a(q);
    for(j=0;j<q;j++) 
   {
        cin>>a[j];
    }

    for(j=0;j<q;j++)
    {
        ll count = lower_bound(v.begin(),v.end(),a[j]+1) - v.begin();
        cout<<count<<endl;
    }
    return 0;
}
