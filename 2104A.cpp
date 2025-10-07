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

    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,temp;
        ll sum;
        cin>>a>>b>>c;
        if(a<b && b<c)
        {
            temp=b;
            sum = a+b+c;
            double div = sum / 3.0;
            ll A = div-a;
            a += A;
            ll B = div-b;
            b += B;
         c = c - (A+B);
            if(sum % 3 ==0 && a==b && b==c  && div >= temp)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    
}

