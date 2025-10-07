#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    //cin.ignore();
    for(i=0;i<t;i++)
    {
        int j,n,s,a=0,B=0,b=0,ans;
        cin>>n;
        vector<int>v(n);
        for(j=0;j<n;j++)
        {
            cin>>v[j];
        }
        for(j=0;j<n;j++)
        {
            if(v[j]==1)
                a+=1;
            else
            {
                b+=2;
                B++;
            }
        }
        ans=a+b;
        if(ans%2==0 && a%2==0 && a>=1  )
            cout<<"YES"<<endl;
        else
            {
                if(b%2==0 & n%2 == 0 && ans%2 ==0 )
                cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl;
            }

    }
}