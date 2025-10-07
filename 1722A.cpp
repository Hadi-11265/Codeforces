#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i;
    string str;
    cin>>i;
    while(i--)
    {
        cin>>n;
        cin>>str;
        string ans="Timru";
        sort(str.begin(),str.end());

        cout<<(ans==str? "Yes" : "No")<<endl;


    }
    

}