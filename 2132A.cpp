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
    int a,b;
    string stra,strb,strc;
    cin>>a>>stra>>b>>strb>>strc;
    list<char>str;
    for(char c : stra)
    {
      str.push_back(c);
    }
    for(int i=0;i<strc.length();i++)
    {
       if(strc[i]=='D')
       {
         str.push_back(strb[i]);
       }
       else
       {
        str.push_front(strb[i]);
       }
    }
    for(char c: str)
    {
      cout<<c;
    }
    cout<<endl;
    

  }
  
}