#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n,k,gold=0,cnt=0;
        cin>>n>>k;
        vector<int>v(n);
        for(i=0;i<n;i++)
        {
            cin>>v[i];
        }


        for(i=0;i<n;++i)
        {
            if(v[i]>=k) {
                gold += v[i];
            }
           else if (v[i] == 0 && gold > 0) {
                gold--;
                cnt++;
            }
        }

        cout<<cnt<<endl;
    }
}