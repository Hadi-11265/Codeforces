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
       ll n,d;
       cin>>n>>d;
       string str;
       cin>>str;
       
       char D = d + '0';
       bool flag = false;
   
       for(ll i=0;i<n;i++)
       {
          int a = str[i] - '0';
          if(a<d)
          {
            str.insert(i,1,D);
            flag = true;
            break;
          }
       }
       if(flag)
       {
          cout<<str<<endl;
       }
       else
       {
         str += D;
         cout<<str<<endl;
       }
    }
}