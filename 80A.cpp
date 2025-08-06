#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int i,m,n,temp1,temp2;
    vector<int>ar= {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    cin>>n>>m;
    for(i=0;i<15;i++)
    {
        if(ar[i]%n==0)
        {
            temp1=ar[i];
            temp2=ar[i+1];
        }

    }
    //cout<<temp1<<" "<<temp2<<endl;
    if( (n==temp1) && (m==temp2) )
       cout<<"YES"<<endl;
    else
       cout<<"NO"<<endl;


}