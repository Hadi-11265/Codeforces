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
   int n;
   cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++)
   {
      cin>>v[i];
   }
   int one=0,two=0,three=0;
   vector<int>pos1,pos2,pos3;
   for(int i=0;i<n;i++)
   {
     if(v[i] == 1)
     {
        pos1.pb(i);
        one++;
     }
     else if(v[i]==2)
     {
        pos2.pb(i);
        two++;
     }
     else
     {
        three++;
        pos3.pb(i);
     }
   }
   int ans = min(one,min(two,three));
   cout<<ans<<endl;
   if(ans>0)
   {
     for(int i=0;i<ans;i++)
     {
        cout<<++pos1[i]<<" "<<++pos2[i]<<" "<<++pos3[i]<<" ";
        cout<<endl;
     }
     
   }
    
}