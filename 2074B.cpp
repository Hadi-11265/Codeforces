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

    int t;
    cin >> t; 
    while (t--)
    {
        int n;
        cin >>n; 
        priority_queue<int> H; 
        int i;
        for( i = 0; i < n; ++i) 
        {
            int a;
            cin >> a;
            H.push(a); 
        }

        while(H.size() > 1)
        {
            int b = H.top(); 
            H.pop();
            int c = H.top(); 
            H.pop();

            int a = b + c - 1;

            H.push(a);
        }

        cout<<H.top()<<endl;
    }

    return 0;
}