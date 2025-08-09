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
void yes()
{
  cout<<"YES"<<endl;
}
void no()
{
  cout<<"NO"<<endl;
}

int main()
{     
    string str;
    getline(cin,str);
    unordered_set<char>uniqueChars;
    for(char ch : str)
    {
        char lwcs = tolower(ch);
        if(isalpha(lwcs))
         uniqueChars.insert(lwcs);
    }
    cout<<uniqueChars.size()<<endl;
}