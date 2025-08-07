#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,fre_plc=0,un_r_c=0;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++)
    {
        int event;
        cin>>event;
        if(event==-1)
        {
            if(fre_plc >0)
                fre_plc--;
            else
                un_r_c++;

        }

        else
            fre_plc +=event;
    }
    cout<<un_r_c<<endl;
}