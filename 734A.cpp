#include<iostream>
using namespace std;
int main()
{
    long int i,n,Anton=0,Danik=0;
    char ch;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>ch;
        ch=toupper(ch);
        if(ch=='A')
        {
            Anton++;
        }
        else
        {
            Danik++;
        }
    }
    if(Anton>Danik)
    {
        cout<<"Anton"<<endl;
    }
    else  if(Danik>Anton)
    {
        cout<<"Danik"<<endl;
    }
    else
    {
    cout<<"Friendship"<<endl;
    }      


}