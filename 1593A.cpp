#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,mx,A,B,C;
        cin>>a>>b>>c;
         A=0,B=0,C=0;
         mx=max({a, b, c});
        A+=max(b, c)-a+1;
        B+=max(a, c)-b+1;
        C+=max(a, b)-c+1;
        A=max(0, A);
        B=max(0, B);
        C=max(0, C);
        cout<<A<<" "<<B<<" "<<C<<endl;

    }
    
}