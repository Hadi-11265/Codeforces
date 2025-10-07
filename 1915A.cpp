#include<iostream>
using namespace std;
int main()
{
    int i,a,b,c;
    cin>>i;
    while(i--)
    {
    cin>>a>>b>>c;
    if(a==b)
    cout<<c<<endl;
    else if(b==c)
    cout<<a<<endl;
    else
    cout<<b<<endl;
    }
  
}