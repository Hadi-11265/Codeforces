#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,temp;
        cin>>a;
         temp=a;
         a++;
         temp--;
         if(a%3==0)
            cout<<"First"<<endl;
         else if(temp%3==0)
            cout<<"First"<<endl;
         else
            cout<<"Second"<<endl;
     
     
    }
}