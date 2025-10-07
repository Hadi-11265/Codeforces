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
    int red ,blue;
    cin>>red>>blue;
    int ans_min = min(red,blue);
    cout<<ans_min<<" ";

    int ans_max = max(red,blue);
    int ans = ans_max-ans_min;
    cout<<ans/2<<endl;

}
