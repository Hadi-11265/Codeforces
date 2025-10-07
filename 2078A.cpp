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

bool Hadi(int n, int x, vector<int>& a)
{
    int sum;
    sum = accumulate(a.begin(), a.end(), 0);
    if(sum == x *n)
    {
        return true;
    }
    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n,x;
        cin>>n>>x;
        vector<int>a(n);
        for(i=0;i<n;i++) {
            cin>>a[i];
        }
        if(Hadi(n,x,a))
        {
            cout<<"YES"<<endl;
        } 
        else
        {
            cout<<"NO"<<endl;
        }
    }
}