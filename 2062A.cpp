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
       int count=0;
       string str;
       cin>>str;
       for(char ch : str)
       {
           if(ch=='1')
            count++;
       }
       cout<<count<<endl;
   }
}