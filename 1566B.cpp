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
        string s;
        cin >> s;
 
        ll cnt0=count(be(s),'0');
        ll cnt1=count(be(s),'1');
 
        ll cnt=0;
        if(cnt0==0) cout << 0 << endl;
        else if(cnt1==0) cout << 1 << endl;
        else{
            bool con0=false;
            ll cnt=0;
            for (ll i = 0; i < s.size(); i++)
            {
                if(s[i]=='0' && con0==false){
                    con0=true;
                    cnt++;
                } else if(s[i]=='0' && con0){
                    continue;
                } else con0=false;
            }
            cout << (cnt>=2?2:cnt) << endl;
        }
    }
    
}