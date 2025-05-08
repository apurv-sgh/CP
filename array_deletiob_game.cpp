#include <bits/stdc++.h>
using namespace std;

struct DSU {
    vector<int> leader;

    DSU(int size) {
        leader.resize(size + 2);
        iota(leader.begin(), leader.end(), 0); 
    }

    int getRoot(int x) {
        if (x != leader[x]) {
            leader[x] = getRoot(leader[x]);
        }
        return leader[x];
    }

    void markUsed(int x) {
        int rep = getRoot(x);
        leader[rep] = getRoot(rep - 1);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n;
        cin >> n;

        vector<int> input(2 * n);
        for (int &num : input)
            cin >> num;

        vector<tuple<int, int>> tasks; 
        for (int i = 0; i < 2 * n; ++i) {
            int limit = min(n, (i / 2) + 1);
            tasks.emplace_back(input[i], limit);
        }

        sort(tasks.begin(), tasks.end(), [](const auto &a, const auto &b) {
            return get<0>(a) > get<0>(b); 
        });

        DSU dsu(n);
        long long score = 0;

        for (const auto &[points, slot] : tasks) {
            int available = dsu.getRoot(slot);
            if (available >= 1) {
                score += points;
                dsu.markUsed(available);
            }
        }

        cout << score << '\n';
    }
    return 0;
}
