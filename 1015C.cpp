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
    ll i,n,m;
    cin>>n>>m;
    vector<pair<ll,ll>>vp(n);
    ll F=0,S=0;
    for(i=0;i<n;i++)
    {
        cin>>vp[i].first>>vp[i].second;
        F += vp[i].first;
        S += vp[i].second;

    }
   
    if(S > m)
    {
        cout<<"-1"<<endl;
    }
    
    else
    {
        vector<ll>dif(n);
        for(i=0;i<n;i++)
        {
            dif[i]=vp[i].first-vp[i].second;
        }
        sort(rbe(dif));
        int count=0;
        for(i=0;i<n;i++)
        {
            if(F > m)
            {
               F -=dif[i];
               count++;
            }
            else
            {
                break;
            }
        }
        cout<<count<<endl;
    }

}