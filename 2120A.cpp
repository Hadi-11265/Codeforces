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
    int t;
    cin >> t;
    while (t--)
    {
        vector<pair<int,int>> v(3);
        for(int i=0;i<3;i++)
        {
            cin>>v[i].first>>v[i].second;
        }

        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += v[i].first * v[i].second;
        }

        int sq = sqrt(sum);
        if (sq * sq != sum)
        {
            no();
            continue;
        }

        bool flag = false;
        sort(be(v));
        do
        {
           
            if (v[0].first == sq && v[1].first == sq && v[2].first == sq && v[0].second + v[1].second + v[2].second == sq)
            {
                flag = true;
                break;
            }

            if (v[0].second == sq && v[1].second == sq && v[2].second == sq && v[0].first + v[1].first + v[2].first == sq)
            {
                flag = true;
                break;
            }

            if (v[0].second == sq)
            {
                int rem = sq - v[0].first;
                if (rem > 0)
                {
                    if (v[1].first == rem && v[2].first == rem && v[1].second + v[2].second == sq)
                    {
                        flag = true;
                        break;
                    }
                }
            }

            if (v[0].first == sq)
            {
                int rem_h = sq - v[0].second;
                if (rem_h > 0)
                {
                    if (v[1].second == rem_h && v[2].second == rem_h && v[1].first + v[2].first == sq)
                    {
                        flag = true;
                        break;
                    }
                }
            }

        } 
        while(next_permutation(be(v)));

        if(flag)
        {
           yes();
        }
        else
        {
            no();
        }
       
    }
}