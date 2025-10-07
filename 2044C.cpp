#include<bits/stdc++.h>
#define ll long long
#define el <<endl;
#define be(x) x.begin() , x.end()
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        ll m, a, b, c;
        cin >> m >> a >> b >> c;
 
        ll row1_seats = min(a, m);
        ll row2_seats = min(b, m);
 
        ll remaining_seats = (m - row1_seats) + (m - row2_seats);
 
        ll c_seats = min(c, remaining_seats);
 
        ll total = row1_seats + row2_seats + c_seats;
        cout << total el;
        
    }

}