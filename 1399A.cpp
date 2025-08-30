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
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        sort(be(v));
        int flag = 1;
        
        for(int i=0;i<n-1;i++)
        {
            if(v[i]==v[i+1] || abs(v[i] - v[i+1] ) <= 1)
            {
              flag =1;
            }
            else
            {
                flag = 0;
                break;
            }
        }

        if(flag == 0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}