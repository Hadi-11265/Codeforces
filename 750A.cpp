#include<iostream>
using namespace std;
int main()
{
    int i,p,late_time,time,total_time=1440,cnt=0,sub=0,l;
    cin>>p>>late_time;
    time = total_time - (1200+late_time);

    for(i=1; ;i++)
    {
        l=5*i;
        sub +=l;

        if(p == cnt )
            break;
        else if(time>=sub)
            cnt++;
        else
            break;

    }
    //cout<<time<<endl;
    cout<<cnt;



}