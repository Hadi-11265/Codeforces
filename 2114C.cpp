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
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++) 
        {
           cin>>v[i];
        }

        int r = 1; 
        int l = v[0];
        for(ll i=1;i<n;i++) 
        {     
           if(v[i] > l + 1) 
           {
                r++;
                l=v[i];
            
           }
    
        }
        cout<<r<<endl;

    
    }
    
    

}
        
    