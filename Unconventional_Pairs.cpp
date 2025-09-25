#include <bits/stdc++.h>
using namespace std;
#define ll long long

void Pair(){
        ll n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) 
        cin >> x;
        sort(a.begin(), a.end());
        ll diff = 0;
        for (int i = 0; i < n; i += 2) {
            diff = max(diff, 1LL* abs(a[i] - a[i + 1]));
        }
        cout <<diff << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin >> t;
    while (t--) {
        Pair();
    }

    return 0;
}
