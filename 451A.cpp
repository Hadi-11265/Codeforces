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
    
        int a,b;
        cin>>a>>b;
        int mn = min(a,b);
        if(mn % 2 == 0)
        {
           cout<<"Malvika"<<endl;
        }
        else
        {
            cout<<"Akshat"<<endl;
        }
      
    

}