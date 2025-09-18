#include <bits/stdc++.h>
using namespace std;
#define ll long long

void minm(){
    ll N,M;
    cin>>N>>M;
    vector<int> A(N);
        vector<int> cnt(M, 0);
        ll total = 0;
        
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
            cnt[A[i]]++;
            total += A[i];
        }
        ll min_sum = total;
        ll curr_sum = total;
        for (int k = 1; k < M; ++k) {
            curr_sum += N;
            int wrapped = cnt[(M - k) % M];
            curr_sum -= 1LL * M * wrapped;
            min_sum = min(min_sum, curr_sum);
        }
        cout << min_sum << "\n";
}

int main() {
	// your code goes here
    ll t;
    cin>>t;
    while(t--){
        minm();
    }
}
