#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int a,b,c,d,s,f;
    cin>>a>>b>>c;
    d=abs(b-c)+abs(c-1);
     s=d;
     f=a-1;
        if(f>s)
        {
            cout<<"2"<<endl;
        }
        else if(s>f)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"3"<<endl;
        }
    }
}