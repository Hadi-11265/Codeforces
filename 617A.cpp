#include<iostream>
using namespace std;
int main()
{
	int n,div,mud,ans;
	cin>>n;
	if(n%5==0)
	{
	div = n/5;
		cout<<div;
	}

	
	 else{
	 	div = n/5;
	mud = n - (div*5);
	
	
	if(mud>0 && mud< 5)
	ans=div+1;
	cout<<ans;
	 }
	
}