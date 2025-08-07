#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string str1,str2,str3,str_sum;
    cin>>str1>>str2>>str3;
    str_sum =str1+str2;

    sort(str_sum.begin(),str_sum.end());
    sort(str3.begin(),str3.end());
    if(str_sum == str3)
    cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
}