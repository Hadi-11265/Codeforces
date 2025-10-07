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
    ll n,k;
    cin>>n>>k;
    vector<ll>v(k),temp(k);
    for(ll i=0;i<k;i++)
    {
        cin>>v[i];
    }
    sort(be(v));
    bool flag = true;
    if(k==0)
    {
        yes();
    }
    else if(v[0]== 1 || v[k-1] == n )
    {
        cout<<"NO"<<endl;
    }
    else
    { 
        for(ll i =1;i<k-1;i++)
        {
            if(v[i]-1 == v[i-1] && v[i]+1 == v[i+1])
            {
                flag = false;
                break;
            }

        }
        if(flag)
        {
            yes();
        }
        else
        {
            no();
        }
    }
    
}

