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
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll i,ans;
        int count =0;
        if(n <2020)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            for(i=1; ;i++)
            {
                ans = i * 2020;
                if(ans<=n )
                {
                   count++; 
                }
                else
                {
                    break;
                }
                
            }

            if(n==(ans-2020))
            {
                cout<<"YES"<<endl;
            }
            else if(abs((ans-2020)-n)<= count)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}