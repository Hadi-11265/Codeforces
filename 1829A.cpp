#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    while(t--)
    {
        int a,cnt=0;
        string str,ans="codeforces";
        cin>>str;
        for(i=0;i<10;i++)
        {
        if(str[i]==ans[i])
            cnt++;
        }
        a=10-cnt;
        cout<<a<<endl;
    }

}