#include<iostream>
#include<string>
using namespace std;
int main() {
    string num;
    cin >> num;    
    int zeros = 0,ones = 0; 
    for (char player : num) {
        if (player == '0') {
            zeros++;
            ones = 0;
        }
         else {
            ones++;
            zeros = 0;
        }    
        if (zeros == 7 || ones == 7) {
            cout << "YES"<<endl;
            return 0;
        }
    }    
    cout << "NO"<<endl;
    return 0;
}