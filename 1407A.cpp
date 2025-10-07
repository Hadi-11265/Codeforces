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
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int one = count(be(v),1);
        int zero = count(be(v),0);
        if(one == n || zero == n) 
        {
            cout<<n<<endl;
            for(int i=0;i<n;i++) 
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        else if(one <= zero) 
        {
            int sz=zero;
            cout<<sz<<endl;
            for(int i=0;i<sz;i++) 
            {
                cout<<"0 ";
            }
            cout<<endl;
        }
        else 
        {
            int sz = one;
            if(sz % 2 != 0) sz--;
            cout<<sz<<endl;
            for(int i=0;i<sz;i++) 
            {
                cout<<"1 ";
            }
            cout<<endl;
        }
        
    }
     
}