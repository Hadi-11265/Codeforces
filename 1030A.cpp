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

    int i,j,l,r;
    string str;
    cin>>l>>r;
    cin>>str;
    for(j=0;j<r;j++)
    {
        for(i=0;i<l-1;i++)
        {
            if(str[i]=='B' && str[i+1]=='G')
            {
                 swap(str[i],str[i+1]);
                 i++;
            }
            
        }
 
    }
    cout<<str<<endl;
}