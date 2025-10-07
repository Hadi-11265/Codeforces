#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int i,n,score=0;
        cin >>n;

        vector<int>v(n);
        unordered_map<int,int>um;
        for(i=0;i<n;i++)
        {
            cin>>v[i];
            um[v[i]]++;
        }
        for(auto& [num, count] : um)
        {
            score += count / 2;
        }

        cout<<score<<endl;
    }

    return 0;
}