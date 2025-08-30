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
//main solution
int main()
{
    ll n;
    cin>>n;
    if(n<4)
    {
        cout<<-1<<endl;
        return 0;
    }
    vector<bool>prime=sieve(n);
    vector<ll>v;
    for(int i=2;i<=n;i++)
    {
       if(prime[i])
       {
         v.pb(i);
       }
    }
   
    int l=0,r=v.size()-1;
    bool flag =  false;
    ll a,b;
    while(l<=r)
    {
        if(v[l] + v[r] ==  n)
        {
            a=v[l];
            b=v[r];
            flag = true;
            break;
        }
        else if(v[l]+v[r] > n )
        {
            r--;
        }
        else
        {
            l++;
        }
    }
    if(flag && b != 0)
    {
       cout<<a<<" "<<b<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }

   
}