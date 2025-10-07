#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,r;
        cin>>r;

        vector<int>clm(r);
        vector<string> rw(r);

        for (i=0;i<r;i++)
        {
            cin>>rw[i];
        }
        for (i=0;i<r;i++)
        {
            for (j=0;j<rw[i].size();j++)
            {
                if (rw[i][j]=='#')
                {
                    clm[i]=j+1;
                    break;
                }
            }
        }
        for(i=r-1;i>=0; i--)
        {
            cout<<clm[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}