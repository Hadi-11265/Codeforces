#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,a,div;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a;
        if(a<=3)
        {
            if(a%2==0)
            {
                div = a / 2;
                 cout<<div<<endl;
            }
            else
            {
                div = (a /2) + 1;
                cout<<div<<endl;
            }

        }
        else if(a>= 4)
        {
            if(a%4==0)
            {
                 div = a/4;
                 cout<<div<<endl;
            }
            else
            {
                div = (a/4) +1;
                cout<<div <<endl;
            }
        }


    }
}