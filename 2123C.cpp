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
    cin >> t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for (ll i=0;i<n;i++) 
        {
            cin>>v[i];
        }

        vector<ll>mn(n),mx(n);
        mn[0] = v[0];
        for (ll i = 1; i < n; i++) 
        {
            mn[i] = min(mn[i - 1], v[i]);
        }

        mx[n - 1] = v[n - 1];
        for(ll i=n-2;i>=0;i--) 
        {
            mx[i] = max(mx[i + 1], v[i]);
        }

        for (ll i=0;i<n;i++) 
        {
            if (i == 0 || i == n - 1) 
            {
                cout << "1";
            } 
            else 
            {
                if (v[i] < mn[i - 1] || v[i] > mx[i + 1]) 
                {
                    cout<<"1";
                } 
                else 
                {
                    cout<<"0";
                }
            }
        }
        cout<<endl;
    }
    
}