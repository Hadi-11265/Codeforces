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
void yes()
{
  cout<<"YES"<<endl;
}
void no()
{
  cout<<"NO"<<endl;
}
int main()
{
        int t,a,b,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a%b==0)
            cout<<"0"<<endl;
        else
        {
            if(a>b)
             {
                   d = b-(a%b);
                   cout<<d<<endl;
              }
            else
                {
                    d = b-(a%b);
                    cout<<d<<endl;
                }
 
        }
    }
}