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
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll left = 0;
    ll max_len = 1;
    for(ll i=1;i<n;i++)
    {
       if(v[i] <= v[i-1])
       {
          left = i;
       }
       max_len = max(max_len,i-left+1);
    }
    cout<<max_len<<endl;
  
   
}