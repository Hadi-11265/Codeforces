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
    int i,n;
    string str , ans="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cin>>n;
    cin>>str;
    transform(be(str),str.begin() , ::toupper);
    sort(be(str));
    str.erase(unique(be(str)),str.end());
    if(str == ans)
   {
      cout<<"YES" <<endl;
   }
   else
    {
       cout<<"NO"<<endl;
    }
 
 

}
