#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int time = 5 - k;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(v[i] <= time)
        {
           count++;

        }
    }
    int ans = count/3;
    
    cout<<ans;
      
    
}