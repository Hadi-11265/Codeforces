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
    vector<int>v(4);
    for(int i=0;i<4;i++)
    {
        cin>>v[i];
    }
    sort(rbe(v));
    for(int i=1;i<4;i++)
    {
        cout<<v[0]-v[i]<<" ";
    }
}