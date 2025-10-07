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
  int t;
  cin>>t;
  while(t--)
  {
    string str;
    cin>>str;
    ll ab=0,ba=0;
    for(int i=0;i<str.length()-1;i++)
    {
        if(str[i]== 'a' && str[i+1] == 'b')
        {
           ab++;
        }
        if(str[i]== 'b' && str[i+1] == 'a')
        {
           ba++;
        }
    }
    if(ab == ba)
    {
        cout<<str<<endl;
    }
    else
    {
        ll dif = abs(ab-ba);
        for(int i=0;i<dif;i++)
        {
           if(ab > ba)
           {
            if(str[i]== 'a' )
             {
               str[i]='b';
             }
            //  else
            //  continue;
          } 
          else
           {
            if(str[i]== 'b' )
             {
               str[i]='a';
             }
            //  else
            //  continue;
          }
       
        }
        cout<<str<<endl;
    }
   
  }
   
}