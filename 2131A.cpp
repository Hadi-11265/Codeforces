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
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    ll ans = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>b[i])
        {
            ll dif = a[i]-b[i];
            ans +=dif;
        }
    }

     cout<<++ans<<endl;
  }
 
  
   
}