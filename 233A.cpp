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

	int n;
	cin>>n;
	if(n%2 != 0)
	{
		cout<<"-1"<<endl;
	}
	else
	{
		for(int i=n;i>0;i--)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}

}
    