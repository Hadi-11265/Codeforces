#include <bits/stdc++.h>
#define ll long long
#define be(x) x.begin(), x.end()
#define rbe(x) x.rbegin(), x.rend()
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back
#define ft front
#define bk back
using namespace std;
int main()
{
    string str;
    cin>>str;

    for(int i=0;i<str.length();i++)
    {
        int num = str[i]- '0';
        int sub = 9-num;
        if(i==0 && sub == 0)
        {
            cout<<num; 
        }
        else
        {
            cout<<min(num,sub);
        }
       
    }
    
}

