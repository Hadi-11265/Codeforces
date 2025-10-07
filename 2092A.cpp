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

	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<ll>v(n);
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
		}
		sort(rbe(v));
		cout<<v.front() - v.back()<<endl;

	}

}
    