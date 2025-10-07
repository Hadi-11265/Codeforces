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
ll r(ll x){
    return (pow(3,x+1)+((x)*pow(3,x-1)));
}
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    ll n;
    cin>>n;

      vector<int> v;
        if (n == 0) 
        {
            v.push_back(0);
        }
        ll temp = n;
        while (temp > 0) 
        {
            v.push_back((int)(temp % 3));
            temp /= 3;
        }

        ll ans = 0;
        for (int i = 0; i < (int)v.size(); ++i) 
        {
            ans += (ll)v[i] * r(i);
        }

        cout<<ans<<endl;
  }




  
}