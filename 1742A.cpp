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
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>v(3);
        for(ll i=0;i<3;i++)
        {
            cin>>v[i];
        }
        sort(be(v));
        if(v[0] + v[1] == v[2])
        {
            yes();
        }
        else
        {
            no();
        }

    }

}

