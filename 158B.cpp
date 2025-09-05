#include <iostream>

using namespace std;

int main() {
    int n, group1 = 0, group2 = 0, group3 = 0, group4 = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        if (input == 1) group1++;
        else if (input == 2) group2++;
        else if (input == 3) group3++;
        else if (input == 4) group4++;

    }

    int taxis = group4;

    taxis += group3;
    group1 -= group3;

    taxis += group2 / 2;
    group2 %= 2;

    if (group2 > 0) {
        taxis++;
        group1 -= 2;
    }

    if (group1 > 0) {
        taxis += (group1 + 3) / 4;
    }

    cout << taxis;

}