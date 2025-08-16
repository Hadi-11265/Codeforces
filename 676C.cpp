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
	int n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	deque <char> p;
	int mx = 0;
	int anw = 0;
	for (int i = 0; i < n; i++)
	{
		p.push_front(s[i]);
		if (s[i] == 'a')
        {
             mx++;
        }
		while (mx > k)
		{
			if (p.back() == 'a')
            {
                 mx--;
            }
			p.pop_back();
		}
		anw = max(anw,int(p.size()));
	}
	p.clear();
	mx = 0;
	for (int i = 0; i < n; i++)
	{
		p.push_front(s[i]);
		if (s[i] == 'b') 
        {
            mx++;
        }
		while (mx > k)
		{
			if (p.back() == 'b') 
            {
                mx--;
            }
			p.pop_back();
		}
		anw = max(anw,int(p.size()));
	}
	cout << anw << endl;
}