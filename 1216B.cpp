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
   int n;
   cin>>n;
   vector<pair<int,int>>v(n);
   for(int i=0;i<n;i++)
   {
     cin>>v[i].first;
     v[i].second=i+1;
   }
   sort(rbe(v));
   int ans = 0;
   for(int i=1;i<n;i++)
   {
     int mul = i*v[i].first;
     ans += mul;
   }
   cout<<ans+n<<endl;
   for(auto x : v)
   {
    cout<<x.second<<" ";
   }
   cout<<endl;
}