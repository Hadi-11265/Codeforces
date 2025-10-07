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
    int n,m,a,b;
	cin>>n>>m>>a>>b;
	cout<<min({a*n,(n+m-1)/m*b,n/m*b+n%m*a});
}
    
