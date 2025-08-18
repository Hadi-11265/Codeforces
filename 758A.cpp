#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int arr[n];
    int maxi=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>maxi)
             maxi=arr[i];
    }
    int total=0;
    for(i=0;i<n;i++)
        total+=maxi-arr[i];
    cout<<total;
}