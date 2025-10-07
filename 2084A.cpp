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
        if(n % 2 == 0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<n<<" ";
            for(int i=1;i<n;i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        
    }
      
    

}
