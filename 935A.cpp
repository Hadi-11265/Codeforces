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
    int n,count=0;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(n%i == 0)
        {
            count++;
        }
    }
    cout<<count<<endl;
}