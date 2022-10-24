#include <bits/stdc++.h>

using namespace std;

int binarySearch(int x, int a[], int n) {
    int low = 0, high, mid;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (x < a[mid]) {
            high = mid - 1;
        } else if (x > a[mid]) {
            low = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;
}

int main() {
    int x, n;
    cout << "x=";
    cin >> x;
    cout <<"n=";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << binarySearch(x, a, n);
}