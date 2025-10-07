#include<bits/stdc++.h>
#define ll long long
#define be(x) x.begin() , x.end()
#define el <<endl
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n,m;
        cin >>n>>m;

        vector<string>w(n);
        for(i = 0; i < n; ++i) {
            cin >> w[i];
        }

        int c_l = 0;
        int count = 0;

        for (const string &word : w)
        {
            int w_l = word.length();
            if (c_l + w_l <= m)
            {
                c_l += w_l;
                ++count;
            }
            else
            {
                break;
            }
        }

        cout<<count el;

    }


}