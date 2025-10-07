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
  while(t--)
  {
     ll a,b,c,d;
     cin>>a>>b>>c>>d;
     //  ll g = a+c;
     //  ll f=b+d;
     if(min(a,c)<min(b,d))
     {
        cout<<"Flower"<<endl;
     }
     else
     {
         cout<<"Gellyfish"<<endl;
     }
   
  }
}