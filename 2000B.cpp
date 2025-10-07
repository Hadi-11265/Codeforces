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
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
       cin>>v[i];
    }
    bool flag = true;
    m[v[0]]++;
    for(int i=1;i<n;i++)
    {
      if(m[v[i]+1] > 0 || m[v[i]-1]>0)
      {
         m[v[i]]++;
      }
      else
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