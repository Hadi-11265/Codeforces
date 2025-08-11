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
void yes()
{
  cout<<"YES"<<endl;
}
void no()
{
  cout<<"NO"<<endl;
}
bool palindrom(string str)
{
   ll l = str.length();

}
int main()
{
  ll i,ans,a,b,c;
	while(cin>>a>>b>>c)
	{
		ans=a+b+c;
		ans=max(ans,(a*b*c));
		ans=max(ans,(a+b)*c);
		ans=max(ans,a*(b+c));
		ans=max(ans,a+(b*c));
		ans=max(ans,(a*b)+c);
		cout<<ans<<endl;
	}
	
}