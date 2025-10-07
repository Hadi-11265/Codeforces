#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main()
{
   int i,j,clm,rw,ans;
   int a[5][5];
   for(i=0;i<5;i++)
   {
       for(j=0;j<5;j++)
       {
           cin>>a[i][j];
       }
   }

   for(i=0;i<5;i++)
   {
       for(j=0;j<5;j++)
       {

           if(a[i][j]==1)
            {
                clm=i+1;
                rw=j+1;
            }
           ans = abs(clm-3)+abs(rw-3);
           //cout<<a[i][j];
       }

   }
    cout<<ans<<endl;

}