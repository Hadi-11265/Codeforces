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
        set<int>s;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]!=-1)
            s.insert(v[i]);
        }
       
      if(s.size() > 1 || s.count(0) > 0) 
      {
        no();
      } 
      else 
      {
         yes();
      } 

        
    }
   
   
}