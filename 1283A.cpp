#include<iostream>
using namespace std;
int main()
{
    int i,n,mnt,hr,h,m,ans=1440,t;
    cin>>n;
    
    while(n--)
    {
        cin>>h >> m;
        mnt = 60 - m;
        hr=24-h-1;
        t= (hr*60) + mnt;
        cout<<t<<endl;
    }

}