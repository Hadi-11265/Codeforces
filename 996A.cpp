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
    int n,mud,a,b,c,d,e,sum;
    cin>>n;
    a = n/100;
    mud = n%100;
    b = mud / 20;
    mud %= 20;
    c = mud /10;
    mud %= 10;
    d = mud / 5;
    mud %= 5;
    e = mud / 1;
 
    sum = a + b+c+d+e;
    cout<<sum;
}