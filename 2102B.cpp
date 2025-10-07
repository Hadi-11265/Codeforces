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
    int t;
    cin>>t;
    while (t--)
    {
       ll n;
       cin>>n;
       vector<ll>v(n);
        ll first;
       for(ll i=0;i<n;i++)
       {
          cin>>v[i];
          if(i == 0)
          {
             first = abs(v[i]);
          }
         v[i]=abs(v[i]);
       }
      
       sort(be(v));
       ll ans;
       for(ll i=0;i<n;i++)
       {
          if(v[i] == first)
          {
            ans = i;
            break;
          }
       }
       if(ans <= n/2)
       {
         yes();
       }
       else
       {
         no();
       }


    }
    
}