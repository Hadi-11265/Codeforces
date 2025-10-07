#include<bits/stdc++.h>
#define ll long long
#define be(x) x.begin() , x.end()
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int i;
         bool flag =0,f=0;
         set<char>s;
         int cnt=0;
        for(i=0;i<str.length();i++)
        {
            if(str[i]==str[i+1])
            {
                flag =1;
            }
 
        }
 
       int length=str.length();
       if(flag ==1)
       cout<<"1"<<endl;
       else
        cout<<length<<endl;
 
    }
 
}