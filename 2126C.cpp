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
#define deb(x) cout << #x << "=" << x << endl
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
  int t;
  cin>>t;
  while(t--)
  {
     ll n,k;
     cin>>n>>k;
     --k;
     vector<ll>v(n);
     set<ll>s;
     for(ll i=0;i<n;i++)
     {
        cin>>v[i];
        s.insert(v[i]);
     }
     ll wl = 0;
     ll h = v[k];
    //  auto w = v.begin() + k;
    //  ll w 
     bool flag = true;
     vector<ll>a;
     for(ll x : s)
     {
        if(x >= h)
        a.pb(x);
     }
     for(ll i=0;i<a.size()-1;i++)
     {
        // ++wl;
        int dif = abs(a[i] - a[i+1]);
        // deb(a[i]);
        // deb(a[i+1]);
        // deb(dif);
        // deb(abs(wl-a[i]));
        // for (ll i = 0; i < a.size(); i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;
        if(abs(wl-a[i]) < dif )
        {
            flag = false;
            break;
        }
        wl+=dif;
     }
     if(flag)
     {
        yes();
     }
     else
     {
        no();
     }

  }
}