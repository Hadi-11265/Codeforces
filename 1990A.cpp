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
      vector<int>v(n);
      set<int>s;
      for(int i=0;i<n;i++)
      {
          cin>>v[i];
          s.insert(v[i]);
      }
      sort(be(v));
      if(s.size()==1 && n %2 == 0)
      {
         no();
         continue;
      } 
      if(s.size()==1 && n %2 != 0 || n%2 != 0)
      {
         yes();
         continue;
      } 
      int mx=0;
      int odd_sum=0,even_sum=0;
      for(int i=0;i<n;i++)
      {
         if(i%2==0)
         {
            even_sum+=v[i];
         }
         else
         {
            odd_sum += v[i];
         }
      }
      if(n%2 == 0 && even_sum == odd_sum)
      {
         no();
         continue;
      }
      if(n%2 == 0 && even_sum < odd_sum)
      {
        yes();
        continue;
      }
      else
      {
        no();
      }
   }
}
