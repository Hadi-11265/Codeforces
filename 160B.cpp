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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    int n;
    cin>>n;
    string str;
    cin>>str;
    string sub_str_first = str.substr(0,str.length()/2);
    string sub_str_last = str.substr(str.length()/2);
    sort(be(sub_str_first));
    sort(be(sub_str_last));
    int i,countf=0,countl=0;
    bool flag = 0;
    for(i=0;i<n;i++)
    {
        if(sub_str_first[i] - '0' > sub_str_last[i] - '0')
        {
            countf++;
        }
        else if(sub_str_first[i]- '0' < sub_str_last[i] - '0')
        {
            countl++;
        }
        else 
        {
            continue;
        }
    }
    if(n == countf || n == countl)
    {
        yes();
    }
    else
    {
        no();
    }
    
}
