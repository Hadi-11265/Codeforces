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

    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        ll remove=0;
        for(ll i=1;i<n-1;++i)
        {
          if((str[i-1]=='m' && str[i]=='a' && str[i+1]=='p') || (str[i-1]=='p' && str[i]=='i' && str[i+1]=='e'))
          {
            remove++; 

           i +=2;
          }
        }
        cout<<remove<<endl;
    }

    
}

