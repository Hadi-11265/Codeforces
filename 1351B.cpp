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
     vector<int>a(2),b(2);
     for(int i=0;i<2;i++)
     {
       cin>>a[i];
     }
     for(int i=0;i<2;i++)
     {
       cin>>b[i];
     }
     sort(be(a));
     sort(be(b));
     int A = a[0] + b[0];
   //   int B = a[1] + b[0];
     if(A == b[1] && a[1] == b[1])
     {
       yes();
     }
     else
     {
       no();
     }

    

  }
}