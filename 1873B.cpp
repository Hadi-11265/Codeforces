#include<bits/stdc++.h>
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
    string str,f_h,l_h,rev1,rev2,temp;
    string ans="abc";
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
        
        int ans=v[0]+=1;
        for(int i=1;i<n;i++)
        {
            ans *= v[i];
        }
        cout<<ans<<endl;
        



    }

}