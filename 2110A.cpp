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
      ll n;
      cin>>n;
      vector<ll>v(n);
      for(int i=0;i<n;i++)
      {
         cin>>v[i];
      }
      int mx = *max_element(be(v));
      int mn = *min_element(be(v));
      sort(be(v));
      int count=0;
      for(int i=0;i<n;i++)
      {
        if((v[i]+mx) % 2 == 0)
        {
           break;
        }
        else if((v[n-1-i] + mn) % 2 == 0)
        {
          break;
        }
        else
        {
           count++;
        }
      }
      cout<<count<<endl;
    }
    
 
 

}