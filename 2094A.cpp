#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    ++t;
    while (t--)
    {

        string str;
        getline(cin,str);
        int count=0;
        for(int j=0;j<str.length();j++)
        {
            if(j==0)
            {
                cout<<str[j];
            }
            else if(str[j]==' ')
            {
                count++;
                cout<<str[j+1];
            }
            if(count ==2)
            {
               cout<<endl;
               break;
            }
            
           
        }
      
    }
    
    
    
}


