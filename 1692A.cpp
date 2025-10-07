#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d,i,cnt=0;
		cin>>a>>b>>c>>d;
		for(i=0;i<4;i++)
		{
			if(a<b && i==0)
			cnt++;
			if(a<c && i==1)
			cnt++;
			if(a<d && i==2)
			cnt++;
		}
		cout<<cnt<<endl;
	}
}