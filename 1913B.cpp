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
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int cnt_ones = 0, cnt_zeros = 0;
        for (char& c : s){
            if (c == '0'){
                cnt_zeros++;
            }
            else if (c == '1'){
                cnt_ones++;
            }
        }
        int cnt = 0;
        int j = 0;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == '1'){
                if (cnt_zeros > 0 && s[j] != '0'){
                    cnt_zeros--;
                    j++;
                }
                else{
                    cnt++;
                    cnt_ones--;
                }
            }
            else{
                if (cnt_ones > 0 && s[j] != '1'){
                    cnt_ones--;
                    j++;
                }
                else{
                    cnt++;
                    cnt_zeros--;
                }
            }
        }
        cout << cnt << "\n";
    }
}