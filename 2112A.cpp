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
       vector<int>v(3),t(3);
       for(int i=0;i<3;i++)
       {
         cin>>v[i];
         t[i]=v[i];
       }
       sort(be(t));
       if(v[0]==t[1])
       {
            no();
       }
       else
       {
          yes();
       }

        
       
    }
}