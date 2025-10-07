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

void yes() { cout << "YES" << endl; }
void no()  { cout << "NO" << endl; }

int good(vector<ll> & v)
{
    int n=v.size();
    int g1,g2;
    for(ll i=0;i<n-2;i++)
    {
       g1 = __gcd(v[i],v[i+1]);
       g2 = __gcd(v[i+1],v[i+2]);
       if( g1 > g2)
        {
            return i+1;
        }
    }
    return -1;
}

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;
       vector<ll>v(n);
       for(ll i=0;i<n;i++)
       {
          cin>>v[i];
       }
       int idx = good(v);
       if(idx == -1)
       {
          yes();
          continue;
       }
       
       bool flag = false;
       {
          for(int i=-1;i<=1;i++)
          {
            int rmv =idx+i;
             if( rmv< 0 || rmv >v.size())
             {
                continue;
             }
              vector<ll>b=v;
              b.erase(b.begin() + rmv);

              if(good(b) == -1)
              {
                  flag = true;
                  break;
              }
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