#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<set>
#include<list>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int i;
        for(i=0;i<str.length()-2;i++)
        {
           char c = str[i];
           cout<<c;
        }

        cout<<"i"<<endl;
    }

}