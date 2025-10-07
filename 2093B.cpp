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
    cin >> t;
    while (t--)
    {
        string str;
        cin>>str;
        int min_rmv = str.length()-1;
        int zero = 0;

        for(size_t i=0;i<str.length();++i)
        {
            if (str[i] == '0')
            {
                zero++;
            }
            else
            {
                int rmv = str.length()-(zero+1);
                if(rmv < min_rmv)
                {
                    min_rmv = rmv;
                }
            }
        }
        cout<<min_rmv<<endl;
    }
  
}