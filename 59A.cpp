#include<iostream>
#include<string>
using namespace std;
int main()
{
	string ch;
	int lwcs=0,upcs=0;
	cin>> ch;
	for(char c : ch){
	if(c >= 'A' &&  c <='Z')
	upcs++;
	else
	lwcs++;
	}
	if(upcs>lwcs)
    {
        for(char &c : ch)
        c=toupper(c);
    }
    else
    {
       for(char &c : ch)
        c=tolower(c);
    }
    cout<<ch<<endl;
    return 0;
}