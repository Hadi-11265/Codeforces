#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    char ch1[str1.length() + 1];
    char ch2[str2.length() + 1];
    for(int i=0;i<str1.length();i++)
    {
         ch1[i] = str1[i];
         ch2[i] = str2[i];


    }

    for(int i=0;i<str1.length();i++)
    {
        if(ch1[i]==ch2[i])
            cout<<"0";
        else
            cout<<"1";
    }


}