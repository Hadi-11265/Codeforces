#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        vector<int>v(n);

        for(i=0;i<n;i++)
            cin>>v[i];
        for(i=0;i<n;i++)
        {
            if(v[i]>= 0)
            sum += v[i];
           else
           {
            v[i]= -v[i];
            sum += v[i];
           }
        }


        cout<<sum<<endl;
        
    }

}