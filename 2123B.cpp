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
      int n,j,k;
      cin>>n>>j>>k;
      vector<int>v(n);
      for(int i=0;i<n;i++)
      {
          cin>>v[i];
      }
      if(k>1)
      {
         yes();
         continue;
      }
      else
      {
         int mx = *max_element(be(v));
         if(mx ==v[j-1])
          {
             yes();
          }
         else
         {
           no();
         }
      }
     
   }
   
    

}