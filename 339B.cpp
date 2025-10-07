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
    int n,m;
    cin>>n>>m;
    vector<int>v(m);
    for(int i=0;i<m; i++) 
    {
        cin>>v[i];
    }
 
    ll count=0;
    int curr=1;
 
    for(int i=0;i<m;i++) 
    {
        if (v[i] >= curr) 
        {
            count += v[i] - curr;
        } 
        else
        {
            count += n - curr + v[i];
        }
        curr = v[i];
    }
 
    cout<<count<<endl;
}