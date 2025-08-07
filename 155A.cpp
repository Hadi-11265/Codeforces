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
    int n;
    cin>>n;
    int a[n];
    cin>>a[0];
    int  mx = a[0];
    int mn = a[0];
    int res=0;
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        if(mx < a[i])
        {
            res++;
            mx = a[i];
        }
        else if(mn >a[i])
        {
            res++;
            mn = a[i];
        }
 
    }
    cout<<res;
}