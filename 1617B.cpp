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
    ll t;
    cin>>t;
    while(t--)
    {
    long long n;  
    cin>>n;
    if(n%2==0) 
    {
        cout<<"2"<<" "<<n-3<<" "<<"1"<<endl;
    }
    else
    {
        n--;
        if((n/2)%2 == 0) 
        {
           cout<<n/2-1 <<" "<<n/2+1<<" 1"<<endl;
        }
        else 
        {
        cout<<n/2-2 <<" "<<n/2+2<<" 1"<<endl;
        }
        
    }
    }
    
     
}