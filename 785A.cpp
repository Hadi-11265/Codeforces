#include <bits/stdc++.h>
#define ll long long
#define be(x) x.begin(), x.end()
#define rbe(x) x.rbegin(), x.rend()
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back
#define ft front
#define bk back
using namespace std;
void yes()
{
  cout<<"YES"<<endl;
}
void no()
{
  cout<<"NO"<<endl;
}

int main()
{
    int t,ans=0;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>str;
        if(str == "Icosahedron")
        ans += 20;
        if(str == "Cube")
        ans += 6;
        if(str == "Tetrahedron")
        ans += 4;
        if(str == "Dodecahedron")
        ans += 12;
        if(str == "Octahedron")
        ans += 8;
    }
    cout<<ans;
    
}