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
        ll ans;
        ll result;
        if(n<=2)
        {
            cout<<v[1]-v[0]<<endl;
        }
        else
        {

            for(ll i=n-2;i>0;i--)
            {
                if(i==n-2)
                {
                    ans = (v[i]-v[i-1]);
                }
                else{
                    ans -=v[i-1];
                }
            }
             cout<< v[n-1]-(ans)<<endl;


        }
    
       
        
    }

}