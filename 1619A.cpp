#include<iostream>
using namespace std;
int main()
{
   string str,first_half,last_half;
   int i,n,t;
   cin>>t;
   while(t--)
     {
        cin>>str;
        n=str.length();
        if(n%2!=0)
          cout<<"No"<<endl;
        if(n%2==0)
        {
            n/=2;
     
          first_half=str.substr(0,n);
          //cout<<first_half<<endl;
          last_half=str.substr(n,str.length());
          //cout<<last_half;
          if(first_half==last_half)
            cout<<"Yes"<<endl;
          else
            cout<<"No"<<endl;
     
        }
    }
       return 0;

}