#include<bits/stdc++.h>
#define ll long long
#define be(x) x.begin() , x.end()
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans;
        cin>>n;
        string str;
        cin>>str;
        set<char>s;
        for(char ch : str)
        {
            s.insert(ch);
        }
        int l=s.size();
        ans=n+l;
        cout<<ans<<endl;
    }
}