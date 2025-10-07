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

long long sum(long long n) 
{
    if (n % 2 == 0)
        return n / 2;
    else
        return -(n / 2) - 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    long long n;
    cin>>n;
    cout<<sum(n) <<endl;
 
}