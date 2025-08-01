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
   cin>>t;
   while(t--)
   {
     int n,k;
     cin>>n>>k;
     vector<int>v(n);
      ll sum = 0;

    for (int i = 0; i < n; i++) 
    {
        cin>>v[i];
        sum += v[i];
    }

    sort(be(v));
    v[n-1]--;
    sort(be(v));
    if(abs(v[n-1] - v[0]) > k)
    {
        cout<<"Jerry"<<endl;
    }
        else 
        {
            if(sum % 2 == 1)
             {
                cout << "Tom" << endl;
             }
            else 
            {
                cout << "Jerry" << endl;
            }
        }
   }
   
}