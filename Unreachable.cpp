#include <iostream>
using namespace std;

void solve() {
    int N;
    cin >>N;
    bool has_even=false, has_odd=false;
    for (int i =0;i<N;++i){
        int a;
        cin >>a;
        if(a==1){
            if(i%2==0) 
            has_even=true;
            else 
            has_odd =true;
        }
    }
    if (has_even&& has_odd) {
        cout<<"No"<<endl;
    } 
    else {
        cout<<"Yes"<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>> t;
    while(t--) 
    solve();
    return 0;
}
