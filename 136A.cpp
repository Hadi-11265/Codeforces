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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n ;
    cin>>n;
   vector<int> arr(n + 1) ;
   int i,p =0 ;
   for ( i = 1; i <= n; i++ ) {
       cin >> p ;
       arr[p] = i ;
   }

   cout << arr[1] ;
   for ( i = 2; i <= n; i++ ) {
      cout<< " " <<arr[i] ;
   }

   cout<<endl ;
    
}