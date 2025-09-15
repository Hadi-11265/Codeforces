#include<bits/stdc++.h>
#define ll long long 
#define be(x) x.begin() , x.end()
#define pb push_back
#define pf push_front
using namespace std;
int main()
{
    vector <int>v(4);
    int i;
    set<int>Set;
    for(i=0;i<4;i++)
    {
        cin>>v[i];
        Set.insert(v[i]);
    }
    cout<<4-Set.size()<<endl;
}