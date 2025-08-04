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
    string str1,str2;
    cin>>str1;
    transform(str1.begin(),str1.end(),str1.begin(),::tolower);
    for(char &ch : str1)
    {
 
        if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u'||ch=='y')
           {
               continue;
           }
        str2 = ch;
        cout<<"."<<str2;
    }
    
}