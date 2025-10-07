#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cin>>name;
 
    unordered_set<char> ch;
    for(char c : name)
    {
        ch.insert(c);
    }
    if(ch.size()%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
}