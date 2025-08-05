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
    cin>>str;
  
    vector<char>ch;
    int i,d=0;
    for(i=0;i<str.length();i++)
    {
 
        if(str[i]=='W'&& str[i+1]=='U' && str[i+2]=='B')
            {
               i+=2;
               cout<<" ";
               continue;
            }
      
        else
            {
                cout<<str[i];
            }
 
 
    }
  
   
}