#include <bits/stdc++.h>
#define ll long long
#define be(x) x.begin(), x.end()
#define rbe(x) x.rbegin(), x.rend()
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back
#define f front
#define b back
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
    cin >> n;
 
    vector<int> arr(n);
    map<int,int> mp;
    for(int &x : arr){
        cin >> x;
        mp[x]++;
    }
 
    bool ok = true;
    for(int i=1; i<=2*n; i++)
    {
        if(mp[i] > 2)
        {
            mp[i+1] += mp[i] - 2;
            mp[i] = 2;
        }
        if(mp[i] % 2)
        {
            ok = false;
        }
    }
 
    if(ok)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
 
    }
    return 0;
}
