#include<iostream>
using namespace std;
int main()
{
	unsigned long long a,m,n,r1,r2;
	cin>>m>>n>>a;
	if(m%a==0)
	{
        r1 = m/a;
    }
	else 
	{
        r1 = (m/a) +1 ;
    }
	if(n%a == 0)
	{
        r2 = n/ a;
    }
	else
	{
        r2 = (n/ a)+ 1;
    }
	
	cout<< r1 * r2;
	return 0;
}