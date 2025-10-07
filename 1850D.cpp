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
        ll n,k;
        cin>>n>>k;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(be(v));

        ll cur_len=1,max_len=1;
        for(int i=1;i<n;i++)
        {
            if(v[i]-v[i-1] <= k)
            {
                cur_len++;
            }
            else
            {
                cur_len=1;
            }
            max_len = max(max_len,cur_len);
        }
        cout<<n-max_len<<endl;
      
    }

}