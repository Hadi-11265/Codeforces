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
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
           cin>>v[i];
        }
        bool even = false;
        bool odd = false;
        if(v[0]%2 == 0)
        {
            even = true;
        }
        if(v[1]%2 == 0)
        {
            odd = true;
        }
        
        bool posible1 = true;
        for(int i=0;i<n;i+=2)
        {
           if(v[i]%2 == 0 && even)
            {
                continue;
            }
            else if(v[i]%2 != 0 && !even)
            {
               continue;
            }
            else
            {
               posible1 = false;
            }
        }
        bool posible2=true;
        for(int i=1;i<n;i+=2)
        {
           if(v[i]%2 == 0 && odd)
            {
                continue;
            }
            else if(v[i]%2 != 0 && !odd)
            {
               continue;
            }
            else
            {
               posible2 = false;
            }
        }

        if(posible1 && posible2)
        {
           yes();
        }
        else
        {
            no();
        }
               
    }
    
}