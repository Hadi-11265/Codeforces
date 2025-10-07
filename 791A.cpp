#include<iostream>
using namespace std;
int main()
{
    int i,a,b,x=0;
    cin>>a>>b;
    while(a<=b)
    {
        a*=3;
        b*=2;
        x++;

    }
    cout<<x<<endl;
    return 0;
}