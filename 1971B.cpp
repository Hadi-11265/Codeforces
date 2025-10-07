#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i;
        string str;
        cin>>str;
        bool flag=0;
        for(i=1;i<str.length();i++)
        {
            if(str[i] != str[i-1])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"NO"<<endl;
         else
            {
                cout<<"YES"<<endl;

                for(i=1;i<str.length();i++)
                {
                    if(str[i] != str[i-1])
                    {
                        swap(str[i],str[i-1]);
                        break;
                    }
                }
                cout<<str<<endl;

            }

    }
}