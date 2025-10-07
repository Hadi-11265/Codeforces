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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string str1,str2;
        cin>>str1>>str2;
    int cnt1=0,cnt2=0;
    for(int i = 0; i < n; i += 2)
    {
        cnt1 += str1[i] == '0';
        cnt2 += str2[i] == '0';
    }
    for (int i = 1; i < n; i += 2) 
    {
        cnt1 += str2[i] == '0';
        cnt2 += str1[i] == '0';
    }
    int up = (n + 1) / 2, down = n / 2;
    
    if(cnt1 >= up && cnt2 >= down)
    {
        cout<<"Yes"<<endl;
    }      
    else
    {
        cout<<"No"<<endl;
    }

    }
}


