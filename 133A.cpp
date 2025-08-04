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
     string str;
    int d=0;
    cin>>str;
    for(char ch : str)
    {
        if(ch=='H'||ch=='Q'||ch=='9')
            d=1;
    }
    if(d==1)
       {
          cout<<"YES"<<endl;
       }
    else
        {
            cout<<"NO"<<endl;
        }
}
