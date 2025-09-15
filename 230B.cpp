#include<iostream>
#include<cmath>
#define ll long long
using namespace std;
bool Prime_Number(ll a)
{
    int i;
    if(a<=1)
       return false;
    if(a==2)
       return true;
    if(a%2==0)
       return false;
    for(i=3;i*i<=a;i+=2)
    {
        if(a%i == 0)
             return false;
    }
    return true;
}
int main()
{
    ll a,i,n,squre_root;
    cin>>n;
    for(i=0;i<n;i++)
    {
            cin>>a;
            squre_root = sqrt(a);
            if((squre_root*squre_root)==a && Prime_Number(squre_root))
        {
               cout<<"YES"<<endl;
        }

        else
        {
               cout<<"NO"<<endl;
        }
    }

}