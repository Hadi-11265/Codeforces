#include<iostream>
using namespace std;
int main()
{
    int i,a,b,c;
    cin>>i;
    while(i--)
    {
        cin>>a>>b>>c;
       if((a<b && b<c) || (a>b && b>c))
        cout<<b<<endl;
       else if(b<c && c<a || b>c && c>a)
        cout<<c<<endl;
       else
        cout<<a<<endl;
    }
    
}