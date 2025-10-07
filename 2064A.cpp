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
        int n;
        cin>>n;
        string str;
        cin>>str;
        int i,j,N,count=0;
        int flag=0;
        for(j=0;j<n;j++)
        {
           if(str[j]=='1')
           {
               flag=1;
               N=1;
               break;
           }
        }
        if(flag==1)
        {
            for(i=j;i<n;i++)
            {
                if(str[i] != str[i+1])
                    count++;
            }
        }

        cout<<count<<endl;
    }

}