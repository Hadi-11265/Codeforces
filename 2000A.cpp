#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
     while(t--)
    {
        int temp, sum=0;
        string str1,str2,sub_str,f_l,str_temp;
        cin>>str1;
         str_temp = str2 = str1;

       int num = stoi(str2);
       temp = num;
       f_l = str_temp.substr(0,1);
       int l = stoi(f_l);
       if(num<=101)
       {
           cout<<"NO"<<endl;
       }
       else if(num>=111 && num<=999)
       {
           cout<<"NO"<<endl;
       }
       else if(num>=1100)
       {
           cout<<"NO"<<endl;
       }
       else if(l>= 2 && l<= 9 )
        {
            cout<<"NO"<<endl;
        }
        

       else
     {
         if(str1.length()<=3)
        {
            sub_str =str1.substr(str1.size()-1);
            int p = stoi(sub_str);
              if(p >= 2)
                cout<<"YES"<<endl;
              else
                cout<<"NO"<<endl;

        }
        else
        {
            sub_str =str1.substr(2);
            int p = stoi(sub_str);
             if( p >= 10 )
                cout<<"YES"<<endl;
             else
                cout<<"NO"<<endl;
        }
     }
    }
}