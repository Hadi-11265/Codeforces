#include<iostream>
using namespace std;
int main()
{
    int a,b,c,i;
    cin>>i;
    while(i--)
    {
        cin>>a>>b>>c;
        if(a+b>=10 || b+c>=10 || c+a>=10)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}