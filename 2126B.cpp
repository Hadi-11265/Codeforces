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
    ll t;
    cin>>t;
    while(t--)
    {
       int n,k;
       cin>>n>>k;
       vector<int>v(n);
       for(int i=0;i<n;i++)
       {
          cin>>v[i];
       }
       int count=0;
       int ans=0;
       bool flag=false;
       for(int i=0;i<n;i++)
       {
         if(flag)
         {
            flag = false;
             continue;
             
         }
          if(v[i]==0)
          {
             count++;
          }
          if(v[i] == 1)
          {
             count = 0;
          }
          if(count == k && v[i+1]==0)
          {
             flag = true;
          }
          if(count == k)
          {
            ans++;
            count=0;
          }
       }
      cout<<ans<<endl;
    }
    
}