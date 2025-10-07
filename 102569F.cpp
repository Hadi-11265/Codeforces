#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n;
    cin>>n;

    vector<int>v;
    for(int i=1;i<=n;i+=2) 
    {
        v.push_back(i);
    }

    if(v.back() != n) 
    {
        v.push_back(n);
    }
    cout<<v.size()<<endl;
    for(int x : v) 
    {
        cout<<x<<" ";
    }
    cout<<endl;

}