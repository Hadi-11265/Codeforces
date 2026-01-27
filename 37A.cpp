#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define be(x) x.begin(), x.end()
#define rbe(x) x.rbegin(), x.rend()
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back
#define ft front
#define bk back
#define MOD 998244353;
using namespace std;
void yes()
{
  cout<<"YES"<<endl;
}
void no()
{
  cout<<"NO"<<endl;
}
//Prime Number using sieve
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
//Prime Number without seive 
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
             return {v[l],v[r]}; // return value
            // return {l+1,r+1}; //Return index

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

string Add(const string &str1, const string &str2) 
{
    ll i=str1.size()-1,j=str2.size()-1;
    ll Iftwobit = 0;
    string ans = "";
    ll x,y;
    while (i >= 0 || j >= 0 || Iftwobit) 
    {
        if(i>=0)
        {
           x = str1[i] - '0';
        }
        else
        {
          x = 0;
        }
        if(j>=0)
        {
           y = str2[j] - '0';
        }
        else
        {
          y = 0;
        }
        int sum = x + y + Iftwobit;
        ans.push_back((sum % 10) + '0');
        Iftwobit = sum / 10;
        i--; 
        j--;
    }

    reverse(be(ans));
    return ans;
}

int main() 
{
   ll n;
   cin>>n;
   vector<int>v(n);
   set<int>s;
   map<int,int>mp;
   for (int i = 0; i < n; i++)
   {
      cin>>v[i];
      s.insert(v[i]);
      mp[v[i]]++;
   }
    int mx =0 ;
   for (auto &p : mp) mx = max(mx, p.second);
   cout<<mx<<" "<<s.size();

   
 
  
}