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
     int ones = count(be(v),1);
     int zeros = count(be(v),0);
     bool flag = true;
     if(n==ones || n==zeros)
     {
        yes();
     }
     else
     {
        for(int i=1;i<n;i++)
        {
           if(v[i]==0 && v[i-1]==0)
           {
              flag = false;
              break;
           }
        }
        if(flag)
        {
           no();
        }
        else
        {
           yes();
        }
     }

  }
}