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
bool palindrom(string str)
{
   ll l = str.length();

}
#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string str;
    cin>>str;
    int n = str.size();
    int count = 0;
    bool flag = false;
    for(int i=0;i<n;i++) 
    {
        if(str[i] == '(')
        {
           count++;
        }
        else
        {
          count--;
        }

        if(count == 0) 
        {
            if(i != n-1) 
            {
              flag = true;
               break;
            }
        }
    }

    if(flag) 
    {
       yes();
    }
    else 
    {
       no();
    }
  }
}