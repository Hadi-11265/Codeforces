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
    int n;
    cin>>n;
    vector<int>v(n);
    set<int>s;
    map<int,int>m;
    vector<int>ans;
    vector<int>temp;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        s.insert(v[i]);
        m[v[i]]++;
    }
    if(s.size() == n)
    { 
        cout<<n<<endl;
        for (int i = n-1; i >=0; i--)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
    }
    else 
    {
        vector<ll>a(s.begin(),s.end());
        vector<ll>b;
        
        ll mid = a.back();
        ll count = 0;
        ll sng=0;
        int md = 0;
        for(ll i=0;i<a.size();i++)
        {
            ll val = a[i];
            if(m[val] == 1 )
            {
               sng++;
            }
            
            if(m[val] >=2 )
            {
              b.pb(val);
              count +=m[a[i]]-1;
            }
            if(m[mid] >= 2)
            {
                md = 1;
            }
        }
        ll sub = n-count;
        ll ans = (sub*2) - md - sng;
        cout<<ans<<endl;
        for(ll i=0;i<b.size()-md;i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<mid;
        for(ll i=a.size()-2;i>=0;i--)
        {
             cout<<" "<<a[i];
        }
         cout<<endl;
        
    }
    
}