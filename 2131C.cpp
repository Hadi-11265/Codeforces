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
  cout << "YES\n"; 
}
void no() 
{ 
  cout << "NO\n"; 
}

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        ll i,n,k;
 
	  	 cin>>n>>k;
 
	  	 vector<ll> v1(n),v2(n);
 
	  	 for(i=0; i<n; i++)cin>>v1[i];
	  	 for(i=0; i<n; i++)cin>>v2[i];
 
	  	 vector<int> ans1,ans2;
 
	  	 for(i=0; i<n; i++){
	  	 	ans1.push_back(min(v1[i]%k,(k-v1[i]%k)));
	  	 }
	  	 
	  	 for(i=0; i<n; i++){
	  	 	ans2.push_back(min(v2[i]%k,(k-v2[i]%k)));
	  	 }
 
	  	 //for(auto it:ans2) cout<<it<<" ";
 
	  	 sort(ans1.begin(),ans1.end());
	  	 sort(ans2.begin(),ans2.end());
 
 
	  	 if(ans2==ans1) cout<<"YES"<<endl;
	  	 else cout<<"NO"<<endl;
 
	  	
    }
}