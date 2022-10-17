#include <bits/stdc++.h>

using namespace std;

int cost(int n) {
    int cost = 0;

    if (n <= 10) {
        cost = n * 10000;
    } else if (n <= 20) {
        cost = 10 * 10000 + (n - 10) * 15000;
    } else {
        cost = 10 * 10000 + 10 * 15000 + (n - 20) * 12000;
    }

    return cost;
}

int main() {
    cout << "Enter n=";
    int n;
    cin >> n;

    cout << cost(n);
}