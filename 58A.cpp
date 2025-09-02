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

    int i,cnt=0,flag=0;
    string str;
    string ans="hello";
    cin>>str;
    for(i=0;i<str.length();i++)
    {
        if(str[i]==ans[cnt])
           cnt++;
        if(cnt==5)
        {
            flag=1;
            break;
        }
 
    }
    if(flag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

