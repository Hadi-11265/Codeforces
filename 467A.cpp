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
    int i,n,d=0;
    cin>>n;
    vector<int>v={4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    for ( i = 0; i <15; i++) {
            if (n % v[i] == 0)
            {
                d = 1;
                break;
            }
        }
        if (d == 1)
        {
           cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

}
