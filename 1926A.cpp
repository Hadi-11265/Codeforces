#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string str,f_h,l_h,sum,ans;
    cin>>t;
    while(t--)
    {
        cin>>str;
        transform(str.begin(),str.end(),str.begin(),::toupper);
        sort(str.begin(),str.end());

          cout<<str[2]<<endl;

    }
}