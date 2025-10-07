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
     int n;
     cin>>n;
     vector<ll>v;
     for(ll i=0;i<n;i++)
     {
        if(i%2 == 0)
        v.pb(-1);
        else
        v.pb(3);
    
     }
     if(n%2 == 0)
     v[n-1]=2;
     for(int X : v)
      {
        cout<<X<<" ";
      }
      cout<<endl;

  }
 
  
   
}