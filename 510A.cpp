#include<bits/stdc++.h>
#define ll long long
#define be(x) x.begin() , x.end()
#define pb push_back
#define pf push_front
using namespace std;
int main()
{
    int i,j,colum,row;
    cin>>colum>>row;
    int count=0;;
    for(i=1;i<=colum;i++)
    {
        if(i%2==0)
        {
            count++;
        }
        for(j=1;j<=row;j++)
        {  
           
            if(count % 2 != 0)
            {
                if(i%2 == 0 && j != row )
                 {
                    cout<<".";
                 }
                else if(j == row  )
                {
                    cout<<"#";               
                }
                else
                {
                    cout<<"#";
                }

            }   

            if(count % 2 == 0)
            {
                if(j==1)
                {
                    cout<<"#";
                }
                else if(i%2 == 0 && j>1)
                {
                   cout<<".";
                }
               else
               {
                   cout<<"#";
               }
            }

        }
        cout<<endl;
    }
}