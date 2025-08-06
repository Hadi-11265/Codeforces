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
    string s;
    cin>>s;
    int n=s.size();
    int uc=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]<='z' && s[i]>='a')
        {
            uc++;
        }
    }
    if(uc>1)
    {
        cout<<s<<endl;
    }
    else if(uc==1 && (s[0]<='Z'&& s[0]>='A'))
    {
       cout<<s<<endl;
    }    
    else{
        if(s[0]<='z' && s[0]>='a')
        {
            s[0]-=32;
            for(int i=1;i<n;i++)
            {
                s[i]+=32;
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                s[i]+=32;
            }
        }
        cout<<s<<endl;
    }
}