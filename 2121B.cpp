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

void yes() {
    cout << "YES" << endl;
}

void no() {
    cout << "NO" << endl;
}

int main() 
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        string str;
        cin>>n>>str;
        
        string first,last;
        first = str.substr(0,n-2);
        last = str.substr(1,n-1);
        map<char,int>frq1,frq2;
        for(int i=0;i<n;i++)
        {
           if(i == 0)
           {
             frq1[str[i]]++;
             continue;
           }
            if(i == n-1)
           {
             frq2[str[i]]++;
           }
           else
           {
              frq1[str[i]]++;
              frq2[str[i]]++;
           }

        }
        
        bool flag = false;
        for(auto p : frq1)
        {
            if(p.second >= 2)
            {
                flag = true;
            }

        }

         for(auto q : frq2)
        {
            if(q.second >= 2)
            {
                flag = true;
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