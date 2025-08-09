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
    ll n;
    cin >> n;
    vector<ll> v(n),t(n);
    
    for(ll i = 0; i < n; i++) 
    {
        cin >> v[i];
        t[i] = v[i];
    }

    sort(be(t));
    ll ans1 = -1, ans2 = -1;
    for(ll i = 0; i < n; i++)
    {
        if(t[i] != v[i]) 
        {
            ans1 = i;
            break;
        }
    }

    for(ll i = n - 1; i >= 0; i--) 
    {
        if (t[i] != v[i]) 
        {
            ans2 = i;
            break;
        }
    }
    if (ans1 == -1) 
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;  
        return 0;
    }

    reverse(v.begin() + ans1, v.begin() + ans2 + 1); 

    if(v == t) 
    {
        cout<<"yes"<<endl;
        cout<<ans1+1<<" "<< ans2+1 <<endl; 
    } 
    else
    {
        cout<<"no"<<endl;
    }
}