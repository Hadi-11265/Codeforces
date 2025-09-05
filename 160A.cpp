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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int i,n,mx=0,sum=0,div=0,cnt=0;
    float ans;
    cin>>n;
    vector<int>v(n);
    bool d=0;
    for(i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    ans = sum /(float) 2;
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(i=0;i<n;i++)
    {
       div+=v[i];
       cnt++;
       if(div > ans)
       {
           d=1;
           break;
       }
    }
    
   if(d==1)
     cout<<cnt<<endl;
    
}
