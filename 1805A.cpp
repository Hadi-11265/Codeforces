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
//Prime Number
vector<bool>sieve(ll n)
{
  vector<bool>primes(n+1,true);
  if(n >= 2)
  {
     primes[0] = false;
  }
  if(n >= 1)
  {
     primes[1] = false;
  }
  for (ll i = 2; i*i <= n; i++)
  {
    if(primes[i])
    {
       for(ll j= i*i;j<=n;j+=i) 
       {
         primes[j]= false;
       }
       
    }
  }
  return primes;
  
}
bool Prime_Number(ll a)
{
    int i;
    if(a<=1)
       return false;
    if(a==2)
       return true;
    if(a%2==0)
       return false;
    for(i=3;i*i<=a;i+=2)
    {
        if(a%i == 0)
             return false;
    }
    return true;
}
pair<int,int> TwoSum_map(vector<ll> &v , ll t)
{
    ll n = v.size();
    map<ll,ll>mp;
    
    for (int i = 0; i < n; i++)
    {
       ll need = t - v[i];
        if(mp.find(need) != mp.end())
        {
            return  {mp[need]+1,i+1} ;
        }
        else
        {
            mp[v[i]] = i;
        }
    }
    
    return  {-1,-1}  ;
    

}
//main solution
int main()
{
   int t;
   cin>>t;
   while (t--)
   {
      int n;
      cin>>n;
      vector<int>v(n);
      int ans=0;
      for (int i = 0; i < n; i++)
      {
          cin>>v[i];
          ans ^= v[i];
      }
      if (n & 1) 
      {
         cout<<ans<<endl;
      }  
      else 
      {
         if ( ans == 0)
         {
            cout<<0<<endl;
         }
         else
         {
            cout<<-1<<endl;
         }
        
      }

   }
   
	
   
   
}