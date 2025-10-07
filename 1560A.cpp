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
        
        for(i=0;i<n+cnt;i++)
        {
            if(i%3==0 || i%10==3 )
            {
                cnt++;
                continue;
            }

        }
        cout<<i-1<<endl;
    }
}