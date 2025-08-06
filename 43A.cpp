#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,mx;
    int i;
    cin>>n;
    vector<string>str(n);
    map<string,int>m;
    bool flag=0;
    for(i=0;i<n;i++)
    {
        cin>>str[i];
        m[str[i]]++;
    }
    if(n==1)
        cout<<str[0]<<endl;
    else
    {
         for(i=1;i<n;i++)
         {
             if(str[i]!=str[i-1])
             {
                 flag = 1;
                 break;
             }
         }
         if(flag==1)
         {
               string maxStr;
               int maxCount = 0;
               for (auto entry : m)
               {
                if (entry.second > maxCount)
                {
                    maxCount = entry.second;
                    maxStr = entry.first;
                }
              }
              cout << maxStr << endl;
         }
         else
         {
             cout<<str[0]<<endl;
         }
    }

    /*
    for(i=0;i<n;i++)
    {
        cout<<str[i]<< " ";
    }
    */
}