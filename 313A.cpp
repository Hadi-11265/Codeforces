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
    string str1=str;
    int num = stoi(str);
    if(num>=0)
    {
        cout<<num<<endl;
    }
    else
    {
        str.pop_back();
        int num1 = stoi(str);
        str1.erase(str1.begin()+(str1.length()-2));
        int num2 = stoi(str1);
        
        cout<<max(num1,num2)<<endl;

    }

}
