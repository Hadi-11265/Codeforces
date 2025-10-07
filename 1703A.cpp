#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    string str;
    string ans="YES";
    cin>>n;
    while(n--)
    {
        cin>>str;
       transform (str.begin(),str.end(),str.begin() , :: toupper);
       if(str == ans)
       cout<<"Yes"<<endl;
       else
       cout<<"No"<<endl;

    }
}