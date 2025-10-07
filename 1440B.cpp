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
	int t;
	cin>>t;
	while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n*k);
        for(int i=0; i<n*k; i++) 
		{
			cin>>v[i];
		}

        int a=n/2+1;
        long long sum=0;
        ll count=0;
        for(int i=n*k-a; i>=0; i-=a)
        {
            sum+=v[i];
            count++;
            if(count==k) 
			{
				break;
			}
        }
        cout<<sum<<'\n';
    }
}