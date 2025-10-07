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
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll>v;
        for(ll k= 1;k<=18;k++)
        {
           ll d=1;
           for(int i=0;i<k;i++)
           {
              d*=10;
           }   
           d+=1;
           if(d>n)
           {
             break;
           }
           if(n%d == 0)
           {
             v.pb(n/d);
           }
        }
        if(v.empty())
        {
            cout<<"0"<<endl;
        }
        else
        {
            sort(be(v));
            cout<<v.size()<<endl;

            for(int i=0;i<v.size();i++)
            {
                cout<<v[i] <<" ";
            }
            cout<<endl;
        }
    }
    
   
    
    
}