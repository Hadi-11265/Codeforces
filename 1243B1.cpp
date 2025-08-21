#include<bits/stdc++.h>
#define ll long long
#define be(x) x.begin() , x.end()
using namespace std;
bool posible(string strA,string strB)
{
    int i;
    for(i=0;i<strA.length();i++)
    {
        if(strA[i] == strB[i])
        {
           return true;
            break;
        }
        else
            return false;
    }
}
int main()
{
    ll t;
    int i,j;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;
        bool flag=0;
        string str1;
        string str2;
        cin>>str1>>str2;
        int i,j,count=0;
        posible(str1,str2);
        for(i=0;i<n;i++)
        {
                if(str1[i] != str2[i])
                {
                   count++;

                  if(count<=1)
                  {
                      for(j=i+1;j<n;j++)
                  {
                     if(str1[j] != str2[j])
                       {
                          swap(str1[i],str2[j]);
                       }

                  }
                  }
                  else
                    break;
               }

        }


        if(str1==str2 && posible)
             {
                 cout<<"Yes"<<endl;
             }
        else
             cout<<"No"<<endl;
    }

}