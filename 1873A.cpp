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
    int t;
    string str,f_h,l_h,rev1,rev2,temp;
    string ans="abc";
    cin>>t;
    while(t--)
    {
        cin>>str;
        temp = str;
        if(ans==str)
            cout<<"Yes"<<endl;
       else{
        swap(str[0],str[1]);
        if(ans==str)
        cout<<"Yes"<<endl;
        else
            {
                swap(temp[1],temp[2]);
                if(ans==temp || temp=="cab")
                    cout<<"Yes"<<endl;
                else
                    cout<<"No"<<endl;
            }

       }


    }

}