#include <bits/stdc++.h>
using namespace std;

void cost() {
        int n, c;
        cin >> n >> c;
        vector<int> types(n);
        vector<int> costs(n);
        for (int &t : types) cin >> t;
        for (int &p : costs) cin >> p;
        unordered_map<int, int> minCostMap;
        for (int i = 0; i < n; ++i) {
            int type = types[i];
            int price = costs[i];
            if (minCostMap.find(type) == minCostMap.end() || price < minCostMap[type]) {
                minCostMap[type] = price;
            }
        }
        priority_queue<int, vector<int>, greater<int>> minHeap;
        for (const auto &entry : minCostMap) {
            minHeap.push(entry.second);
        }
        int bestProfit = 0;
        int totalSpent = 0;
        int uniqueCount = 0;
        while (!minHeap.empty()) {
            totalSpent += minHeap.top();
            minHeap.pop();
            ++uniqueCount;
            int profit = (c * uniqueCount) - totalSpent;
            bestProfit = max(bestProfit, profit);
        }
        cout << bestProfit << '\n';
}

int main(){
    int t;
    cin >> t;
    while (t--) {
        cost();
    }
}
