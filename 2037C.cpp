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
   while (t--) 
   {
        int n;
        cin>>n;

        if (n<=4) 
        {
            cout<<"-1"<<endl;
            continue;
        }

        for(int i=2;i<=n;i+=2)
        {
           if (i==4)
           {
              continue;
           }
          cout<<i<<" ";
        }
        cout<<"4 5 ";

       for(int i=1;i<=n;i+=2)
       {
           if(i==5)
           {
              continue;
           }
          cout<<i<<" ";
       }
    }

   
}