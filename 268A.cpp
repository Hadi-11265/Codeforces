#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> uniforms(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> uniforms[i].first >> uniforms[i].second; 
    }

    int count = 0;

    for (int host = 0; host < n; ++host) {
        for (int guest = 0; guest < n; ++guest) {
            if (host != guest) {

                if (uniforms[host].first == uniforms[guest].second) {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
    return 0;
}