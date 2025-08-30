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
        int i,n,k;
        long full_block,index_block,result;
        cin>>n>>k;
 
         full_block=(k-1)/(n-1);
         index_block=(k-1)%(n-1);
        result = full_block*n+index_block+1;
        cout<<result<<endl;
    }
    
}