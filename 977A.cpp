#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int i,n,ans,num;
    string str;
    cin>>str>>n;
    num = stoi(str);
   for(i=0;i<n;i++)
   {
       if(num%10==0)
         {
            ans=num/10;
            num = ans;
         }
       else
           num -= 1;

   }

   cout<<num;

}