#include<iostream>
using namespace std;
int main()
{
    int a,b,c,i,n,sum;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        sum=a+b;
        if(a+b<=c)
            cout<<"+"<<endl;
        else
            cout<<"-"<<endl;
    }
    return 0;
}