#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    while(t--)
    {
        int n,ans;
        cin>>n;
         vector<int>v(n);
         map<int,int>m;
         for(i=0;i<n;i++)
        {
            cin>>v[i];
             m[v[i]]++;
        }
        for(i=0;i<n;i++)
        {
        if(m[v[i]]==1)
            {
                ans=i+1;

                break;
            }
        }
        cout<<ans<<endl;
    }
}