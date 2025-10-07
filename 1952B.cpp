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
       string str;
       cin>>str;
       int i=0,t=0;
       bool flag=0;
       for(int j=0;j<str.length();j++)
       {
           if(str[j]=='i')
           {
               if(str[j+1]=='t')
               {
                   flag=1;
                   break;
               }
 
           }
       }
       if(flag==1)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
   }
 
}

