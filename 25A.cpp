#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin>>n;
        vector<int>v(n);
        set<int>s;
        int i,ans,odd_count=0,even_count=0;
        for(i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]%2 != 0)
            {
                odd_count++;
            }
            else
            {
                even_count++;
            }
        }
      for(i=0;i<n;i++)
      {
          if(even_count>odd_count)
          {
              if(v[i]%2 != 0)
              {
                  cout<<i+1<<endl;
              }
          }
          else
          {
              if(v[i]%2 == 0)
              {
                  cout<<i+1<<endl;
              }
          }
      }
}