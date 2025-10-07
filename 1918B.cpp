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
      vector<int>a(n),b(n);
      set<int>s;
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
      for(int i=0;i<n;i++)
      {
          cin>>b[i];
      }
      
      vector<pair<int,int>>p(n);
      for(int i=0;i<n;i++)
      {
         p[i] ={a[i],b[i]};
      }
      sort(be(p));
      for(int i=0;i<n;i++)
      {
         cout<<p[i].first<<" ";
      }
      cout<<endl;
       for(int i=0;i<n;i++)
      {
         cout<<p[i].second<<" ";
      }
      cout<<endl;

   }
}
