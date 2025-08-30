#include <bits/stdc++.h>
#define ll long long
#define be(x) x.begin(), x.end()
#define rbe(x) x.rbegin(), x.rend()
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back
#define f front
#define b back
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        
        int Num_of_zero = count(be(str), '0');
        
        if (Num_of_zero == (str.length() - 1))
        {
            cout << "1 " << str << endl;
        }
        else
        {
            cout << (str.length() - Num_of_zero) << " ";

            for (int i = 0; i < str.length(); i++)
            {
                if (str[i] != '0')
                {
                    int n = str[i] - '0';
                    int factor = pow(10, str.length() - i - 1);
                    cout << (n * factor) << " ";
                }
            }
            cout << "\n";
        }
    }
   
}