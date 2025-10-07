#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,n;
     cin>>n;
     for(i=0;i<n;i++)
     {
         if(i%2==0)
            {
                if(i>1)
                    cout<<"that ";
                cout<<"I hate ";
            }
         else
            cout<<"that I love ";
     }
     cout<<"it"<<endl;

}