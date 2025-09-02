#include<bits/stdc++.h>
#define ll long long 
#define be(x) x.begin() , x.end()
#define pb push_back
#define pf push_front
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        if(str.length()<=10)
        {
            cout<<str<<endl;
        }
        else
       {
            cout<<str.front()<<str.length()-2<<str.back()<<endl;
       }
    }
    return 0;
}