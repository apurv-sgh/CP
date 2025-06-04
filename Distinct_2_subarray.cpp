#include <bits/stdc++.h>
using namespace std;

int gd_array(const vector<int>& arr) {
    int n = arr.size();
    int minLength = INT_MAX;
    for (int i = 0; i < n; ++i) {
        unordered_set<int> distinct;
        for (int j = i; j < n; ++j) {
            distinct.insert(arr[j]);
            if (distinct.size() > 2) {
                break;
            }
            if (distinct.size() == 2) {
                minLength = min(minLength, j - i + 1);
            }
        }
    }
    return (minLength == INT_MAX) ? -1 : minLength;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int& x : arr) {
            cin >> x;
        }
        cout << gd_array(arr) << endl;
    }
    return 0;
}