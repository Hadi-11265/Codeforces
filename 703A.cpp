#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int a,b,cnt_a=0,cnt_b=0;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a>b)
            cnt_a++;
        if(b>a)
            cnt_b++;
        
    }
    if(cnt_a > cnt_b)
       cout<<"Mishka"<<endl;
    else if(cnt_a <cnt_b)
       cout<< "Chris"<<endl;
    else
       cout<<"Friendship is magic!^^"<<endl;
}