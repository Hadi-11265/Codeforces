#include<iostream>
using namespace std;
int main()
{
    int weight;
    cin>>weight;
    if(weight%2==0 && weight>2)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    
    return 0;
}