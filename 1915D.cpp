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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;
       string str;
       cin>>str;

       for(ll i=1;i<n;i+=2)
       {
          cout<<str[i-1]<<str[i];
          if( i+1 < n && str[i+2] == 'a' || str[i+2] == 'e')
          {
             if(i+2 <n )
             {
                 cout<<".";
              }
             continue;
          }
          else
          {
            if( i+1 < n)
            cout<<str[i+1];
             i++;
          }
          
          if(i+1 < n )
          {
              cout<<".";
          }
        
       }
       cout<<endl;
      
    }
}
