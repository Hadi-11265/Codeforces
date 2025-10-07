#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
    string str,f_h,s_h;
    cin>>str;

    f_h = str.substr(0,str.length()/2);
    s_h = str.substr(str.length()/2);

    int i,l,f=0,s=0;

    for(i=0;i<3;i++)
    {
        f+=f_h[i]-'0';
        s+=s_h[i]-'0';

    }
    if(f==s)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    }

}