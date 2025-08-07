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
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int totalDrink = k*l;
    int totalLimeSlices = c*d;
    int toastsByDrink = totalDrink / (n*nl);
    int toastsByLime = totalLimeSlices / n;
    int toastsBySalt = p/(n*np);
    int maxToasts = min({toastsByDrink, toastsByLime, toastsBySalt});
    cout<<maxToasts<<endl;
    
}