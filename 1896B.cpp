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
        string str,temp;
        cin>>str;
        ll ans = n-1;
       
        for(ll i=0;i<n;i++)
        {
           if(str[i]=='B')
           {
             ans--;
           }
           else 
           {
              break;
           }
        }
      //   sort(rbe(temp));
      //   ll count = 0;
      //  while (temp != str)
      //  {
      //     for(ll i=left;i<n-1;i++)
      //     {
      //        if(str[i]=='A' && str[i+1]=='B')
      //        {
      //          swap(str[i],str[i+1]);
      //          count++;
      //        }
      //     }
      //  }
       for(ll i=n-1;i>0;i--)
        {
           if(str[i]=='A')
           {
             ans--;
           }
           else 
           {
              break;
           }
        }
      
       if(ans<0)
       {
         cout<<0<<endl;
       }
       else
       {
        cout<<ans<<endl;
       }
       
    }
   
   
}