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
bool palindrom(string str)
{
   ll l = str.length();

}
bool IsPrime(int n) 
{
    if (n <= 1) 
    {
      return false;
    }
    for(int i = 2; i <= sqrt(n);i++) 
    {
        if(n % i == 0)     
        {
           return false;
        }
    }
    return true;
}

int main()
{
   int n;
   cin>>n;
   int count=0;
    int result;
   
   for(int i=6;i<=n;i++)
   {
    set<int>s;
     int total_count=0;
       if(IsPrime(i))
       {
          continue;
       }
       bool flag = false;
          for(int j=2;j<=i/2;j++)
          {
             
             if( i % j == 0)
             {
               s.insert( i / j);
             }
          }
          for(int x : s)
          {
              if(IsPrime(x))
               {
                   total_count++;
               }
              
          }
            
            
          
       if(total_count==2)
       {
         count++;
       }
     }
   cout<<count<<endl;
  
  
   
}