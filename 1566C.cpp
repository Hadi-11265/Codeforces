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
    ll t;
    cin >> t;

    while (t--)
    {

        int n;
        string str1,str2;
        cin>>n>>str1>>str2;
        ll sum = 0;
        for(ll i=0;i<n;i++)
        {
            if(str1[i] != str2[i])
            {
                sum += 2;
            }
           
            if(str1[i]=='1' && str2[i] =='1')
            {
                if(i+1<n && str1[i+1]=='0' && str2[i+1]=='0')
                {
                    sum+=2;
                    ++i;
                }
            }
            else if(str1[i]=='0' && str2[i] =='0')
            {
                if(i+1<n && str1[i+1]=='1' && str2[i+1]=='1')
                {
                    sum+=2;
                    ++i;
                }
                else
             sum+=1;
            }
            
           
        }
        cout<<sum<<endl;
    }
    
   return 0;
}