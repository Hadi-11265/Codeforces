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
   int n,k;
   cin>>n>>k;
   vector<string>str(n);
   vector<ll>v(k);
   string ans="ABCDE";
   for (ll i = 0; i < n; i++)
   {
      cin>>str[i];
   }
   for (ll i = 0; i < k; i++)
   {
      cin>>v[i];
   }
   ll sum = 0;
   for (int i = 0; i < k; i++)
   {
     int frq[5]={0};
     for (int j = 0; j < n; j++)
     {
        // if(ans[j] == str[i][j])
        // {
        //     sum+=v[i];
        // }
        frq[str[j][i]-'A']++;
     }
     int mx_frq = *max_element(frq,frq+5);
     sum += 1ll *mx_frq * v[i];
   }
   cout<<sum<<endl;
   
   
   
    
}