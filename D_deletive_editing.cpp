#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {    
    ll t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        ll n=s.size();
        unordered_map<char,int>freq_t;
        for(char c:t){
            freq_t[c]++;
        }
        for(int i=n-1;i>=0;i--){
            if(freq_t.count(s[i])){
                freq_t[s[i]]--;
                 if (freq_t[s[i]]<=0) {
                    freq_t.erase(s[i]); 
                }
            }
            else{
                s[i]='.';
            }
        }
        vector<char>res;
        for(int i=0;i<n;i++){
            if(s[i]!='.'){
                res.push_back(s[i]);
            }
        }
        ll m = t.size();
        bool all_match = true;  
        
        if (res.size() != m) {
            all_match = false;
        } else {
            for (int i = 0; i < m; i++) {
                if (res[i] != t[i]) {
                    all_match = false;
                    break;
                }
            }
        }
        cout << (all_match ? "YES" : "NO") << endl;

    }
    return 0;
}
