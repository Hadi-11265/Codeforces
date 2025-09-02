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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    string str1,str2;
    cin>>str1>>str2;
    reverse(str2.begin(),str2.end());
    if(str1==str2)
    cout<<"YES";
    else
    cout<<"NO";
}
