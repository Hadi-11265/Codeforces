#include<iostream>
using namespace std;
int main()
{
    int t,num;
    cin>>t;
    while(t--)
    {
        cin>>num;
        if(1900<= num)
        {
             cout<<"Division 1"<<endl;
        }
        else if(num<=1899 && num>= 1600)
        {
            cout<<"Division 2"<<endl;
        }
        else if(num<=1599 && num>= 1400)
        {
            cout<<"Division 3"<<endl;
        }
        else
        {
            cout<<"Division 4"<<endl;
        }
    }
}