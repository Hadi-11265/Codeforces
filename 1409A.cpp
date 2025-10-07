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
      ll a,b;
      cin>>a>>b;
      
      ll dif = abs(a-b);
      ll ans = dif/10;
      if(dif % 10 == 0)
      {
         cout<<ans<<endl;
      }
      else
      {
         cout<<ans+1<<endl;
      }
   
      
   }
   
    

}