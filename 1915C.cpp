#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long i,j,m,n,sq,ans;
    cin>> m;
    //long int ar[m];
    for(i=0;i<m;i++)
    {
         long long sum = 0;
        cin>>n;
        vector<long int>v(n);
        for(j=0;j<n;j++)
        {
            cin>>v[j];
            sum += v[j];
        }
        sq = sqrt(sum);
        ans = sq*sq;
        if(sum == ans)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}