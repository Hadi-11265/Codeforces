#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str,hour,minutes,temp;
        int time,sub;
        cin>>str;
        temp=str;
        hour=str.substr(0,2);
        minutes=temp.substr(2,temp.length());
         time = stoi(hour);
         if(time>=12)
         {
             sub = time - 12;
             if(sub==0)
                sub=12;
             if(sub<10)
             cout<<"0"<<sub<<minutes<<" PM"<<endl;
             else
             cout<<sub<<minutes<<" PM"<<endl;
             //cout<<hour;
         }
        else if(time==0)
         {
             sub = abs(time-12);
             if(sub==0)
                sub=12;
             if(sub<10)
             cout<<"0"<<sub<<minutes<<" AM"<<endl;
             else
             cout<<sub<<minutes<<" AM"<<endl;
             //cout<<hour;
         }
         else
          cout<<str<<" AM"<<endl;
    }

}