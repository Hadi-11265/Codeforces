#include<bits/stdc++.h>
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
    long long i,num,ans;
    bool flag=0;
    cin>>num;
    string num_str;
    char first_index;
    ostringstream os;
    os<<num;
     num_str=os.str();
  
   first_index=num_str[0];
     
   for(i=0;i<num_str.length();i++)
     {
         if(num_str[i] != num_str[i+1])
         {
             flag=1;
             break;
         }
     }
     if(flag==0)
        cout<<num;
     else if(flag == 1)
     {
            int l = num_str.length();
        string m = string(l,first_index);
            ans = stoll(m);
           if(ans>=num)
            cout<<ans<<endl;
         else
         {
            int add = first_index-'0';
             add += 1;
           char c = first_index+1;
          string h = string(l,c);
          cout<<h<<endl;

         }

  }

}