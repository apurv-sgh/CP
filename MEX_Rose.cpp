#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
      unordered_map<int, int> freq;
        int max_val = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            freq[a[i]]++;
            if (a[i] > max_val)
                max_val = a[i];
        }
        if (k == 0) {
            cout << freq[0] << endl;
        } else {
            int missing = 0;
            for (int i = 0; i < k; ++i) {
                if (freq.find(i) == freq.end())
                    missing++;
            }
            int cnt_k = freq[k];
            cout << max(missing, cnt_k) << endl;
}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) 
    solve();
}
