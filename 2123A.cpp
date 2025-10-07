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
      if(n < 4)
      {
         cout<<"Alice"<<endl;
         continue;
      }
      else
      {
         if(n%2==0)
         {  
            if((n-1) % 4 == 3)
             cout<<"Bob"<<endl;
            else
             cout<<"Alice"<<endl;
         }
         else 
         {
            cout<<"Alice"<<endl;
         }
      }
   
      
   }
   
    

}