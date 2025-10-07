#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n,cnt=0;
        cin>>n;
        vector<int>v(n);
        for(i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(i=1;i<n;i++)
        {
            if(abs(v[i]-v[i-1])==5 ||(abs(v[i]-v[i-1])==7))
              cnt++;
        }
        if(cnt==(n-1))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}