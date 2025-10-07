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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        string str="";
        bool flag=false;
        int zero=0,one=0,two=0,three=0,five=0;
        int digit=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<=n;i++)
        {
            digit++;
            if(zero>=3 && one>=1 && two>=2 && three>=1 && five>=1 )
            {
                flag = true;
                break;

            }
            else
            {
                if(v[i]==0)
                {
                    zero++;
                }
                else if(v[i]==1)
                {
                    one++;
                }
                else if(v[i]==2)
                {
                    two++;
                }
                else if(v[i]==3)
                {
                    three++;
                }
                else if(v[i]==5)
                {
                    five++;
                }
                
            }
        }

        if(flag)
        {
            cout<<digit-1<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
}