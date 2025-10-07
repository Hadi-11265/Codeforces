#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a=0;
    while(t--)
    {
        string str;
        cin>>str;
        if(str=="X++" || str=="x++" || str=="++X" || str=="++x")
        {
            a++;
        }
        else if(str=="--X" || str=="--x" || str=="X--" || str=="x--")
        {
            a--;
        }
    }
    cout<<a<<endl;

}