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
        ll n,m,k;
       cin>>n>>m>>k;

    ll gap,avg_gap,ans;
    gap = (n*m) - k;

    avg_gap = gap  / n;

    ans = m / (avg_gap+1) ;

    cout<<ans<<endl;
    }
}
