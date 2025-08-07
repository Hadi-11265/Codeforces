#include<bits/stdc++.h>
#define ll long long
#define be(x) x.begin(), x.end()
using namespace std;
int main()
{
    int first,second,third,fourth;
    cin>>first>>second>>third>>fourth;
    string str;
    cin>>str;
    int sum=0;
    for(char ch : str)
    {
        if(ch=='1')
        {
            sum+=first;
        }
        else if(ch=='2')
        {
            sum+=second;
        }
        else if(ch=='3')
        {
            sum+=third;
        }
        else
        {
            sum+=fourth;
        }
    }
    cout<<sum<<endl;
}