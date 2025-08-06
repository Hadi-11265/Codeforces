#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
//getline(cin,str);
   list<string> li={".","-.","--"};
   vector<char>ch(str.length());
   for(int i =0;i<str.length();i++)
    ch[i] = str[i];

   for(int i =0;i<str.length();i++)
   {
     if(ch[i]=='.')
        cout<<"0";
     else
     {
         i++;
         if(ch[i]=='.')
            cout<<"1";
        else
            cout<<"2";
     }
   }



}