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
    int i,n,x,ans;
	ans = 99999;
	cin>>x>>n;
	vector<int>v(n);
	for( i = 0; i < n; i++)
	{
		cin>>v[i];
	}
	sort(be(v));
	for(i = 0; i <=(n-x); i++)
	{
        ans = min(ans, v[i + (x - 1)] - v[i]);
    }
	cout <<ans;

}
    