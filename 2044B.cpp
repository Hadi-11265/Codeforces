#include<bits/stdc++.h>
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
        reverse(be(str));
         for(char ch : str)
         {
           if(ch=='p')
            cout<<'q';
           else if(ch=='q')
           cout<<'p' ;
           else
            cout<<'w' ;
        }
       cout<<endl;
    }
   return 0;
}