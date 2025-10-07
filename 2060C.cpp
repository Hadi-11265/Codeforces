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
void twoSum(vector<int> &v , int x)
{
    int n = v.size();
    int i,j;
    int count=0;
    
    sort(be(v));
    int left = 0;
    int right = n-1;

    while(left<right)
    {
        int sum = v[left]+v[right];
        if(sum == x)
        {
            count++;
            left++;
            right--;
        }

        else if( sum < x)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    
    cout<<count<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int>v(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        
        twoSum(v,x);
    

    }

}