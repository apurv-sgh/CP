#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll NEG_INF = -9e18;

void city(){
     int N;
        ll K;
        cin>>N>>K;
        vector<ll> W(N + 1);
        vector<int> C(N + 1);
        for (int i=1;i<=N;++i)
            cin>>W[i];
        for (int i= 1;i<=N; ++i)
            cin>> C[i];
        unordered_map<int, ll> val; 
        ll global_add = 0;
        val[C[1]]=0;
        ll max_val= 0;
        for (int i =2;i<=N;++i) {
            ll best_now =max_val+global_add;
            ll candidate= best_now- K + W[i];
            global_add -= W[i];
            if(val.find(C[i])==val.end()){
                val[C[i]]=NEG_INF;
            }
            val[C[i]]+=2* W[i];
            ll candidate_stored=candidate -global_add;
            if(candidate_stored>val[C[i]]) {
                val[C[i]]=candidate_stored;
            }
            if (val[C[i]]>max_val){
                max_val=val[C[i]];
            }
        }
        ll answer=max_val+global_add;
        cout<<answer<<"\n";
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
       city();
    }
    return 0;
}
