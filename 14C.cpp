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

void yes() { cout << "YES" << endl; }
void no()  { cout << "NO" << endl; }

int main() 
{
    ll a,b,c,d;
    int horizontal = 0;
    int vertical = 0;
    map<pair<ll, ll>, int>m;
    for(int i=0;i<4;i++) 
    {
        cin>>a>>b>>c>>d;

        if (a == c && b == d) 
        {
            no();
            return 0;
        }
        if(b == d) 
        {
          ++horizontal;
        }
        else if (a == c) 
        {
          ++vertical;
        }
        else 
        {
            no();
            return 0;
        }

        m[{a, b}]++;
        m[{c, d}]++;
    }

    if (horizontal != 2 || vertical != 2) 
    {
        no();
        return 0;
    }

    for (auto &p : m) 
    {
       if(p.second != 2) 
       {
          no();
          return 0;
       }
    }

    yes();
   

}