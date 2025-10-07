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
        n -= 2;
        vector<int>b(n);
        int i,flag=0;
        
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(i=1;i<n-1;i++)
        {
            if (b[i] == 0 && b[i-1] == 1 && b[i+1] == 1) 
            {
                flag = 1;
            }
        }
        if(flag == 1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        
    }
}