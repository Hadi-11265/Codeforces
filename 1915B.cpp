#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    //cin.ignore();
    while(t--)
    {
        int i,j,A,B,C,ans=198,D;
        vector<char>a(3);
        vector<char>b(3);
        vector<char>c(3);
        char ch1,ch2,ch3;
        for(i=0;i<3;i++)
        {
            cin>>a[i]>>b[i]>>c[i];
        }
        for(i=0;i<3;i++)
        {
            if(a[i]=='?')
            {
                B=b[i];
                C=c[i];
                D=ans-(B+C);
                ch1=D;
                cout<<ch1<<endl;
            }
          else if(b[i]=='?')
            {
                A=a[i];
                C=c[i];
                D=ans-(A+C);
                ch2=D;
                cout<<ch2<<endl;
            }
          else if(c[i]=='?')
            {

                A=a[i];
                B=b[i];
                D=ans-(A+B);
                ch3=D;
                cout<<ch3<<endl;
            }


        }



    }
}