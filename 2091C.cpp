#include<bits/stdc++.h>
#define ll long long 
#define be(x) x.begin() , x.end()
#define rbe(x) x.begin() , x.end()
#define pb push_back
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        if(n%2 == 0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
           for(int i=n;i>=1;i--)
           {
              cout<<i<<" ";
           }
           cout<<endl;
        }
    }

} 