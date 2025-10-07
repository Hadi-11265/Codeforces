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
    int i,k,n;
    cin>>k>>n;
    int ans;
    for(i=1;;i++)
    {
        int mul = k*i;

        if(mul % 10 == 0 || mul%10 == n)
        {
            ans = i;
            break;
        }

    }
    cout<<ans<<endl;
}
