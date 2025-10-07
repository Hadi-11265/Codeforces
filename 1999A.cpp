#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,a[2];
    cin>>t;
    string str;
     
    while(t--)
    {
       int sum=0;
        cin>>str;
        for(i=0;i<2;i++)
        {
            int a=str[i]-'0';
            sum +=a;
        }
        cout<<sum<<endl;
    }
}