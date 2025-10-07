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
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        stack<char> s;
        ll max_len = 0;
        s.push(str[0]); 

        for (int i = 1; i < n; i++)
        {
            if (str[i] == str[i - 1])
            {
                s.push(str[i]);
            }
            else
            {
                ll t = s.size();
                max_len = max(max_len, t);
                while (!s.empty())
                {
                   s.pop(); 
                }
                s.push(str[i]); 
            }
        }

        max_len = max(max_len, (ll)s.size()); 
        cout << max_len+1 << endl;
    }
}