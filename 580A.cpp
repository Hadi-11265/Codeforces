#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,position=0,cnt=1,mx,ans;
    cin>>n;

    vector<int>v(n);
    //vector<int>an(n);
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(i=1;i<n;i++)
    {
        if(v[i] >= (v[i-1]))
        {
            cnt++;
            if(cnt>=position)
            {
                position=cnt;
            }


        }
        else
           {
                cnt=1;
           }
    }
   if(n==1 || position==0)
    cout<<"1"<<endl;

   else if( position > n )
        {
            cout<<position-1;
        }
    else
    cout<<position<<endl;
}