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
       int a,b,c;
       int ans;
       cin>>a>>b>>c;
       if(2*b <= c)
       {
          ans = a*b;  
       }
       else
       {
           int C = a/2;
           int m = a%2;
           ans = C*c + m*b;
       }
       cout<<ans<<endl;
    }
}