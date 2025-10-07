#include <bits/stdc++.h>
#define ll long long
#define be(x) x.begin(), x.end()
#define rbe(x) x.rbegin(), x.rend()
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back
#define ft front
#define bk back
using namespace std;
int main() 
{
    int n,m;
    cin>>n>>m;
    vector<char>v(n*m);
    bool flag=false;
    for(int i=0;i<n*m;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n*m;i++)
    {
        if(v[i]=='C' || v[i]=='M' || v[i]=='Y')
        {
           flag=true;
           break;
        }
    }
    if(flag)
    {
        cout<<"#Color"<<endl;
    }
    else
    {
        cout<<"#Black&White"<<endl;
    }
}