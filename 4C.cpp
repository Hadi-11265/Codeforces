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
	int i,n,cnt=0;
	cin>>n;
	vector<string>str(n);
	map<string,int>m;
	for(i=0;i<n;i++)
	{
		cin>>str[i];
		m[str[i]]++;
		if(m[str[i]] < 2)
		{
			cout<<"OK"<<endl;
		}
		else
		{
  
			cout<<str[i]<<m[str[i]]-1<<endl;
		}
	}
}
    