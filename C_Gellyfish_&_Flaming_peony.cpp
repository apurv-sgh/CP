#include <bits/stdc++.h>
using namespace std;

void peony() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int &x : arr) 
            cin >> x;

        int overallGCD = arr[0];
        for (int i = 1; i < n; ++i) {
            overallGCD = __gcd(overallGCD, arr[i]);
        }

        int countGCD = count(arr.begin(), arr.end(), overallGCD);
        if (countGCD > 0) {
            cout << (n - countGCD) << '\n';
            continue;
        }

        vector<int> uniqueNums;
        unordered_set<int> seen;

        for (int num : arr) {
            if (seen.insert(num).second) {
                uniqueNums.push_back(num);
            }
        }

        const int MAX_VAL = 5000;
        vector<int> steps(MAX_VAL + 1, INT_MAX);
        queue<int> q;

        for (int num : uniqueNums) {
            steps[num] = 0;
            q.push(num);
        }

        while (!q.empty()) {
            int current = q.front();
            q.pop();

            if (current == overallGCD) 
                break;

            for (int num : uniqueNums) {
                int newGCD = __gcd(current, num);
                if (steps[newGCD] > steps[current] + 1) {
                    steps[newGCD] = steps[current] + 1;
                    q.push(newGCD);
                }
            }
        }

        cout << (steps[overallGCD] + n - 1) << '\n';
    }
}

int main() {
    peony();
    return 0;
}
