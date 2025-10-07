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
#define db(x) cout << #x << " = " << x << '\n';
#define dbv(v) for(ll p:v)cout<<p<<" ";

using namespace std;
void yes()
{
  cout<<"YES"<<endl;
}
void no()
{
  cout<<"NO"<<endl;
}
//Prime Number usong sieve
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

//Tow Sum Using map
pair<int,int>TowSum(vector<ll>&v , int t)
{
   ll n = v.size();
   map<ll,ll>mp;
   for(ll i=0;i<n;i++)
   {
      ll need = t - v[i];
      if(mp.find(need) != mp.end())
      {
        // return {mp[need]+1,i+1}; //Index print
        return {need,v[i]};  //Value print
      }
      else
      {
        mp[v[i]] = i;
      }
   }
   return {-1,-1};
}

//Two Sum Two Pointer
pair<ll,ll>TwoPointer(vector<ll>&v,ll t)
{
    
    int l=0,r=v.size()-1;
    ll a,b;
    while(l<r)
    {
        if(v[l] + v[r] ==  t)
        {
            // return {v[l],v[r]}; // return value
            return {l+1,r+1}; //Return index

        }
        else if(v[l]+v[r] > t )
        {
            r--;
        }
        else
        {
            l++;
        }
    }
    return {-1,-1};
}
//main solution
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string str1,str2;
    cin>>str1>>str2;
    bool flag = true;
    if(str1[0] != str2[0])
    {
      no();
      continue;
    }
    // if(str1.size()==1)
    ll count=1;
    vector<ll>v1,v2;
    for(ll i=1;i<str1.size();i++)
    {
      if(str1[i] != str1[i-1])
      {
        v1.pb(count);
        count=1;
      }
      else
      {
        ++count;
      }
    }
    v1.pb(count);
    ll c=1;
    for(ll i=1;i<str2.size();i++)
    {
      if(str2[i] != str2[i-1])
      {
        v2.pb(c);
        c=1;
      }
      else
      {
        ++c;
      }
    }
    v2.pb(c);
    if(v1.size() != v2.size())
    {
      no();
      continue;
    }
    for(int i = 0 ;i<v1.size();i++)
    {
       if(v2[i] > (v1[i] * 2))
       {
          flag = false;
          break;
       }
       if(v2[i] < v1[i])
       {
         flag = false;
         break;
       }
    }
    if(flag)
    {
      yes();
    }
    else
    {
      no();
    }
  }
   
}