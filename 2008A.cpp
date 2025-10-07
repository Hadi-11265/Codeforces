#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n,i,j,cnt1=0,cnt2=0,ans,a1,b1,an;
        cin>>a>>b;
        n=a+b;
        //vector<int>v;
        for(i=0;i<a;i++)
        {

           cnt1+=1;

        }
        for(j=0;j<b;j++)
        {

           cnt2+=2;

        }
        ans= cnt1+cnt2;
        if((a%2!=0 && b==0)||(a==0 &&b%2!=0))
            cout<<"No"<<endl;
        else if(cnt1%2==0)
            {
                a1=cnt1%2;
                b1=cnt2%2;

                an=a1+b1;

                if(an%2==0)
                    cout<<"Yes"<<endl;
                else
                    cout<<"No"<<endl;



            }
        else
            cout<<"No"<<endl;



    }

}