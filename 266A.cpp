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
    int i,n,coun=0;
    cin>>n;
    char col[n];
    for(i=0;i<n;i++)
    {
        cin>>col[i];
    }
    for(i=0;i<n;i++)
    {
        if(col[i]==col[i+1])
        {
            coun++;
        }
 
    }
    cout<<coun;
}