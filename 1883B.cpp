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
        string str;
        cin>>str;
        set<char>s;
        map<char,int>m;
        if(n==k+1 || n==1)
        { 
           yes();
           continue;
        }
        for(ll i=0;i<n;i++)
        {
            m[str[i]]++;
        }
        ll consider=0;
        for(auto& chk : m)
        {
            if(chk.second % 2 != 0)
            {
                ++consider;
            }
           
        }
        --consider;
        if(consider <= k)
        {
           yes();
        }
        else
        {   
            no();          
        }
        
       
        
    }

}