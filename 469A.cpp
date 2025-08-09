#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,p,q,lvl=0,ans=0;
    cin>>n;
    cin>>p;
    set<int>lev;
    bool d=0;
    for(i=0;i<p;i++)
    {
        int a;
        cin>>a;
        lev.insert(a);
    }
    cin>>q;
    for(j=0;j<q;j++)
    {
        int b;
        cin>>b;
        lev.insert(b);
    }
   
    if(n-lev.size()==0)
    cout<<"I become the guy."<<endl;
    else
    cout<<"Oh, my keyboard!"<<endl;
    

}