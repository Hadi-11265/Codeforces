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
int target(int i , int j)
{
  if(i==0 || i==9 || j==0 || j==9)
  {
     return 1;
  }
  else if(i==1 || i==8 || j==1 || j==8)
  {
     return 2;
  }
  else if(i==2 || i==7 || j==2 || j==7)
  {
     return 3;
  }
  else if(i==3 || i== 6 || j== 3 || j== 6)
  {
     return 4;
  }
  else if(i==4 || i== 5 || j== 4 || j== 5)
  {
     return 5;
  }
 
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<vector<char>> matrix(10, vector<char>(10));
        for(int i = 0; i < 10; i++)
        {
            for(int j = 0; j < 10; j++)
            {
                cin >> matrix[i][j]; 
            }
        }
        int ans=0;
        for (int i = 0; i < 10; i++) 
        {
            for (int j = 0; j < 10; j++) 
            {
                if(matrix[i][j]=='X')
                {
                    ans += target(i,j);
                }
            }
        }
 
        cout<<ans<<endl;
    }
}