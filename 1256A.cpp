#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long a,b,n,s,A,C,mx;
        cin>>a>>b>>n>>s;
         A =min(a,s/n);
         C = s-(A*n);

        if(C<=b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
       // cout<<A<<" "<<C;
    }
    return 0;
}