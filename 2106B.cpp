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
        int n,x;
        cin>>n>>x;
        vector<int>v;
        if(n==1)
        {
            cout<<"0"<<endl;
            continue;
        }
        for(int i=0;i<n;i++)
        {
           v.pb(i);
               
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]==x && n)
            {
                continue;
            }
            else
            {
                cout<<i<<" ";
            }
        }
        if(n != x)
        cout<<x;
        cout<<endl;
       
        
    }
      
    

}
