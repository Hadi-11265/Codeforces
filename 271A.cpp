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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    int i,year;
    string str,v;
    cin>>str;
 
    year= stoi(str);
    for(i=year+1; ;i++)
    {
      ostringstream oss;
      oss<<i;
      v=oss.str();
      if(v[0] != v[1] && v[0]!=v[2] && v[0] != v[3] && v[1]!=v[2] && v[1] != v[3] && v[2] != v[3] )
            {
                cout<<i;
                break;
            }
 
    }
}
