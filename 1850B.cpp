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
        int n;
        cin>>n;
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i].first>>v[i].second;
        }
        int position;
        int mx = 0;
        int mn = 0;
        for(int i=0;i<n;i++)
        {
            if(v[i].first <= 10)
            {
                if(v[i].second > mx)
                {
                    mx = v[i].second;
                    position = i+1;
                }
            }
            if(v[i].first >= 10)
            {

            }
        }
        cout<<position<<endl;
    }
      
    

}