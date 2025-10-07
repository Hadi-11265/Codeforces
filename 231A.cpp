#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,problem_num;
    cin>>problem_num;
    int count=0;
    while(problem_num--)
    {
        int hadi,arman,sakib;
        cin>>hadi>>arman>>sakib;
        if((hadi+arman + sakib)>=2)
        {
           count++;
        }
    }
    cout<<count<<endl;


}