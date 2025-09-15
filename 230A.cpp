#include <bits/stdc++.h>
#define ll long long
#define be(x) x.begin(), x.end()
#define rbe(x) x.rbegin(), x.rend()
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back
#define f front
#define b back
using namespace std;

int main()
{
    int s,n;
    cin>>s>>n;
    int t=n;
    bool flag= 1;
    int count=0;
    vector<pair<int,int>>p(n);
    for(int i=0;i<t;i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    sort(be(p));
    for(int i=0;i<t;i++)
    {
       int x=p[i].first , y=p[i].second;
        if(s>x)
        {
            s+=y;
           
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
        
        //cout<<p[i].first<<" " <<p[i].second;
    }
    
        cout<<"YES"<<endl;
   


    return 0;
}