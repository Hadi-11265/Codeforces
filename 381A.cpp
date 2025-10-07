#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i< vec.size();i++ ){
        cin>>vec[i];
    }

    int s=0,d=0;
    int f=1;;

    while(!vec.empty()){
        if(f==1){
            if(vec[0]>vec.back()){
                s+=vec[0];
                vec.erase(vec.begin());
            }
            else{
                s+=vec.back();
                vec.pop_back();
            }
            f=2;
        }

        else{
            if(vec[0] > vec.back() ){
                d+=vec[0];
                vec.erase(vec.begin());
            }
            else{
                d+=vec.back();
                vec.pop_back();
            }
            f=1; 
        }
    }

    cout<<s<<" "<<d<<endl;
}