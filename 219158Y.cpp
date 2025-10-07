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
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll result=1;
    result = (result *a) % 100;
    result = (result *b) % 100;
    result = (result *c) % 100;
    result = (result *d) % 100;

    if(result < 10)
    {
        cout<<"0";
    }
    cout<<result<<endl;

}