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
      int n;
      cin>>n;
      vector<int>v1,v2;
      for(int i=2;i<=n;i+=2)
      {
         v1.pb(i);
      }
      for(int i=1;i<=n;i+=2)
      {
         v2.pb(i);
      }
      sort(rbe(v2));
      for(int x : v1)
       {
          cout<<x<<" ";
       }
       for(int x : v2)
       {
          cout<<x<<" ";
       }
       cout<<endl;
       
   }

    
}