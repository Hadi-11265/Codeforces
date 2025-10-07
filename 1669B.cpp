#include<iostream>
#include<map>
using namespace std;
int main()
{
    int i,j,n,t;
    cin>>t;
    int a,ans=-1;
    for(j=0;j<t;j++)
    {
        map<int,int>m;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a;
            m[a]++;

        if(m[a]==3)
        ans = a;
        }
        cout<<ans;
        ans = -1;
        cout<<endl;
    }

}