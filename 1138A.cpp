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
   vector<int>v(n);
   for (int i = 0; i < n; i++)
   {
     cin>>v[i];
   }
   
 
   int cnt=0,x=v[0],cn1=0,mx=0;
 
   for(int i=0;i<n;i++)
   {
 
      if(v[i]==x)
      {
        cnt++;
        mx=max(min(cnt,cn1),mx);
      }
 
      else
      {
        cn1=cnt;
        cnt=1;
         mx=max(min(cnt,cn1),mx);
        
       x=v[i];
 
      }
 
 
 
   }
 
   cout<<2*mx<<endl;
 
   
       
    
}