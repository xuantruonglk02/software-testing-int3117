#include <bits/stdc++.h>

using namespace std;

int main() {
    cout << "Input the number of cake: ";
    int n;
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Invalid input";
        return 0;
    }

    int cost = 0;
    if (n <= 3) {
        cost = n * 10000;
    } else {
        cost = n * 10000 * (1 - 0.2);
    }
    cout << cost;
}
