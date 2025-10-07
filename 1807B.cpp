#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n,Mihai=0,Bianca=0;
        cin>>n;
        vector<int>v(n);
        for(i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(i=0;i<n;i++)
        {
            if(v[i]%2==0)
                Mihai+=v[i];
            else
                Bianca +=v[i];

        }
        if(Mihai > Bianca )
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}